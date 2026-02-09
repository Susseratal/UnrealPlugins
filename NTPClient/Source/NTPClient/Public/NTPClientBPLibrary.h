#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Async/Async.h"

#include "NTPClientBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

typedef struct {
	uint8_t li_vn_mode;			// li. two bits. leap indicator
	// vn. three bits. version number of the protocol
	// mode. three bits. client will pick mode 3 for client

	uint8_t stratum;			// eight bits. ntp hierarchy level - max 16
	uint8_t poll;				// eight bits. max interval between successive messages
	uint8_t precision;			// eight bits. precision of local clock

	uint32_t rootDelay;			// thirty two bits. total round trip delay time
	uint32_t rootDispersion;	// thirty two bits. max error allowed from primary clock source
	uint32_t refId;				// thirty two bits. reference clock identifier

	uint32_t refTm_s;			// thirty two bits. reference time-stamp in seconds
	uint32_t refTm_f;			// thirty two bits. reference time-stamp fraction of a second

	uint32_t originTm_s;		// thirty two bits. originate time-stamp in seconds
	uint32_t originTm_f;		// thirty two bits. originate time-stamp fraction of a second

	uint32_t rxTm_s;			// thirty two bits. received time-stamp in seconds
	uint32_t rxTm_f;			// thirty two bits. received time-stamp fraction of a second

	uint32_t txTm_s;			// thirty two bits. transmit time-stamp seconds -- IMPORTANT
	uint32_t txTm_f;			// thirty two bits. transmit time-stamp fraction of a second
} ntp_packet; // total of 384 bits or 48 bytes

// DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegate, int, startTime);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegate, int, ntpTimeHrs, int, ntpTimeMins, int, ntpTimeSecs);

UCLASS()
class UNTPClientBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UNTPClientBPLibrary(const FObjectInitializer& ObjectInitializer);
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get NTP time", Category="NTP"))
	static void GetNTPTime(FDelegate delegate);

	/**
	* Get in hrs, minutes and seconds, the duration of time the game has been running synchronised to monotonic time
	* 
	* @param h The number of hours since the game started running
	* @param m The number of minutes since the game started running
	* @param s The number of seconds since the game started running
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Game Uptime", Category="Monotonic Time"))
	static void GetGameUptime(int startTime, int& h, int& m, int& s);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Monotonic Time", Category="Monotonic Time"))
	static void GetMonotonicTime(int& t);


private:
	static void Print(FColor colour, FString msg);
};
