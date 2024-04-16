#include <iostream>
#include <windows.h>

using namespace std;

void networkStatus(void) {
    HMODULE hModule = LoadLibrary(TEXT("sensapi.dll"));
    if(hModule == NULL) {
        cerr << "Error on loading sensapi.dll" << endl;
    }
    typedef BOOL(WINAPI *LPFN_IsNetworkAlive)(PDWORD);
    LPFN_IsNetworkAlive pIsNetworkAlive = (LPFN_IsNetworkAlive)GetProcAddress(hModule, "IsNetworkAlive");
    if (pIsNetworkAlive == NULL) {
        cerr << "Error to obtain network function" << endl;
    }
    DWORD flags;
    if(pIsNetworkAlive(&flags)) {
        cout << "You are connected!" << endl;
    } else {
        cerr << "You are not connected!" << endl;
    }
    FreeLibrary(hModule);
}