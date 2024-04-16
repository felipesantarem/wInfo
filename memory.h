#include <iostream>
#include <windows.h>

using namespace std;
void memoryStatus(void) {
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof(statex);
    GlobalMemoryStatusEx(&statex);
    cout << "Memory usage:" << statex.dwMemoryLoad << endl;
}