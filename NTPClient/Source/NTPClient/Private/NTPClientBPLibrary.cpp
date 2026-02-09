// Copyright Epic Games, Inc. All Rights Reserved.
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include "NTPClientBPLibrary.h"
#include "NTPClient.h"
#include "Engine/Engine.h"

#include <chrono>
#include <time.h>
#include <WinSock2.h>

#define NTP_TIMESTAMP_DELTA 2208988800ull

using namespace std::literals::chrono_literals;

UNTPClientBPLibrary::UNTPClientBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer) {

}

// NOTE: pool.ntp.org
void UNTPClientBPLibrary::GetNTPTime(FDelegate delegate) {
	AsyncTask(ENamedThreads::AnyThread, [delegate]() {
		int ntpHrs = 0;
		int ntpMins = 0; 
		int ntpSecs = 0;
		int portNumber = 123;

		/// Create and zero out all 48 bytes of the packet
		ntp_packet packet = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		memset(&packet, 0, sizeof(ntp_packet));

		/// Set the first byte's bits to 00,011,011 for li = 0, vn = 3, and mode = 3
		*((char*)&packet + 0 ) = 0x1b; /// 27 in base 10 or 00011011 in base 2!

		struct sockaddr_in serv_addr; /// server address data structure
		struct hostent* server; /// Server data structure

		SOCKET sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

		if (sockfd < 0) { Print(FColor::Red, "ERROR opening socket"); }

		server = gethostbyname("uk.pool.ntp.org");

		if (server == NULL) { Print(FColor::Red, "ERROR no such host"); }

		/// zero out the server address structure
		memset((char*)&serv_addr, 0, sizeof(serv_addr));
		serv_addr.sin_family = AF_INET;

		/// copy the server IP address to the server address structure
		memcpy((char*)&serv_addr.sin_addr.s_addr, (char*)server->h_addr, server->h_length);

		/// convert the port number integer to network big endian style and save it to the server address structure
		serv_addr.sin_port = htons(portNumber); 

		/// Call up the server using ip address and portnumber
		int result = connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
		if (result < 0) { Print(FColor::Red, "ERROR connecting"); }

		/// send it the ntp packet it wants. if n == -1, it failed
		result = send(sockfd, (char*)&packet, sizeof(ntp_packet), 0);
		if (result < 0) { Print(FColor::Red, "ERROR writing to socket"); }

		result = recv(sockfd, (char*)&packet, sizeof(ntp_packet), 0);
		if (result < 0) { Print(FColor::Red, "ERROR reading from socket"); }

		// These two fields contain the time-stamp seconds as the packet left the NTP server.
		// The number of seconds correspond to the seconds passed since 1900.
		// ntohl() converts the bit/byte order from the network's to host's "endianness".

		packet.txTm_s = ntohl( packet.txTm_s ); // Time-stamp seconds.
		packet.txTm_f = ntohl( packet.txTm_f ); // Time-stamp fraction of a second.

		// Extract the 32 bits that represent the time-stamp seconds (since NTP epoch) from when the packet left the server.
		// Subtract 70 years worth of seconds from the seconds since 1900.
		// This leaves the seconds since the UNIX epoch of 1970.
		// (1900)------------------(1970)**************************************(Time Packet Left the Server)

		time_t txTm = ( time_t ) ( packet.txTm_s - NTP_TIMESTAMP_DELTA );
		struct tm buf;
		gmtime_s(&buf, &txTm);

		ntpHrs = buf.tm_hour;
		ntpMins = buf.tm_min;
		ntpSecs = buf.tm_sec;

		// ntpMins = txTm / 60;
		// ntpSecs = txTm % 60;
		// ntpHrs = ntpMins / 60; // hrs since 1970
		// ntpMins = ntpMins % 60;

		AsyncTask(ENamedThreads::GameThread, [delegate, ntpHrs, ntpMins, ntpSecs]() {
			delegate.ExecuteIfBound(ntpHrs, ntpMins, ntpSecs);
		});
	});
}

void UNTPClientBPLibrary::GetMonotonicTime(int& t) {
	std::chrono::time_point sp = std::chrono::steady_clock::now(); 
	auto sp_s = std::chrono::time_point_cast<std::chrono::seconds>(sp);
	auto duration_s = sp_s.time_since_epoch();
	t = duration_s.count();
}



void UNTPClientBPLibrary::GetGameUptime(int startTime, int& h, int& m, int& s) {
	std::chrono::time_point tp = std::chrono::steady_clock::now(); 
	auto tp_s = std::chrono::time_point_cast<std::chrono::seconds>(tp); // cast NOW to seconds
	auto duration_s = tp_s.time_since_epoch();
	int currentTime = duration_s.count();

	int runtime = currentTime - startTime;
	int minutes = runtime / 60;
	int seconds = runtime % 60;
	int hours = minutes / 60;
	minutes = minutes % 60;

	h = int(hours);
	m = int(minutes % 60);
	s = int(runtime % 60);
}

void UNTPClientBPLibrary::Print(FColor colour, FString msg) {
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, colour, msg);
}
