#include <iostream>
#include <windows.h>
#include "./battery.h"
#include "./memory.h"
#include "./network.h"
#include "./sysinfo.h"

int main() {
    cout << "Select one operation:" << endl;
    int operation;
    cout << "1-Battery" << endl << "2-Memory" << endl;
    cout << "3-Network" << endl << "4-Other info" << endl;
    cin >> operation;
    cout << endl;
    switch(operation) {
        case 1:
            batteryStatus();
            break;
        case 2:
            memoryStatus();
            break;
        case 3:
            networkStatus();
            break;
        case 4:
            systemStatus();
            break;
        default:
            cout << "Operation not supported. More features soon." << endl;
            break;
    }
    return 0;
}