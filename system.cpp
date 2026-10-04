#include <iostream>
#include <cstdlib>
#include <ctime>
#include "system.h"

using namespace std;

void showSystemInfo()
{
    cout << "\n";
    cout << "SYSTEM INFORMATION\n\n";

    system("systeminfo");

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void showCpuRam()
{
    cout << "\n";
    cout << "CPU & RAM INFORMATION\n\n";

    cout << "CPU:\n";
    system("wmic cpu get name");

    cout << "\nRAM:\n";
    system("wmic OS get FreePhysicalMemory,TotalVisibleMemorySize");

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void showDiskSpace()
{
    cout << "\n";
    cout << "DISK SPACE\n\n";

    system("wmic logicaldisk get caption,freespace,size");

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void showBattery()
{
    cout << "\n";
    cout << "BATTERY STATUS\n\n";

    system(
        "wmic path Win32_Battery "
        "get BatteryStatus,EstimatedChargeRemaining"
    );

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void showDateTime()
{
    cout << "\n";
    cout << "DATE & TIME\n\n";

    time_t now = time(0);

    cout << "Current Date & Time:\n";
    cout << ctime(&now);

    cout << "\nPress ENTER to continue...";
    cin.get();
}