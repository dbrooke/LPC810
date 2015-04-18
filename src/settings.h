//NODE SPECIFIC DETAILS - need to be changed
#define NUM_REPEATS			3
#define NODE_ID				"XXX"
#define LOCATION_STRING		"xx.xxx,xx.xxx"
#define POWER_OUTPUT		20				// Output power in dbmW
#define TX_GAP				3000				// Milliseconds between tx = tx_gap * 100, therefore 1000 = 100 seconds
#define MAX_TX_CHARS		32				// Maximum chars which can be transmitted in a single packet

//NODE TYPES
// Tx debug data and print full debug to serial
//#define DEBUG

//Print rx'd strings only
#define GATEWAY

// Comment out if you don't want GPS (ublox binary)
//#define GPS

//#define SERIAL_IN

#define ADC