#include <iostream>
#include <windows.h>
using namespace std;

void batteryStatus(void) {
    cout << "Battery" << endl << "-------" << endl;

    SYSTEM_POWER_STATUS * lps = new SYSTEM_POWER_STATUS;


// Validation: this computer is not on battery?
    if(!GetSystemPowerStatus(lps)) {
        cout << "Battery not found." << endl;
    } else if (lps->ACLineStatus == 1) { // if computer is on line AC (power)
        cout << "Battery on energy" << endl;
    } else {
        int percent = lps->BatteryLifePercent;
        cout << "Battery percentage: " << percent << endl;
    }
}