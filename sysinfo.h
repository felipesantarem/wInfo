#include <iostream>
#include <windows.h>

using namespace std;
void systemStatus(void) {
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);
    switch(sysInfo.wProcessorArchitecture) {
        case PROCESSOR_ARCHITECTURE_AMD64:
            cout << "x64 AMD or Intel";
            break;
        case PROCESSOR_ARCHITECTURE_INTEL:
            cout << "x86 Intel" << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
    }
    cout << sysInfo.dwNumberOfProcessors << " cores." << endl;
}