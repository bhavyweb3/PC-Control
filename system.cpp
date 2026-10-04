#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "system.h"
#include "utils.h"

using namespace std;

void showSystemInfo()
{
    cout << "\n";
    cout << "SYSTEM INFORMATION\n\n";

    int result = system("systeminfo");

    if (result != 0)
    {
        errorMessage();
    }

    pauseScreen();
}

void showCpuRam()
{
    cout << "\n";
    cout << "CPU & RAM INFORMATION\n\n";

    // CPU information
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);

    cout << "CPU:\n";
    cout << "Number of CPU cores: "
         << systemInfo.dwNumberOfProcessors << "\n";

    // RAM information
    MEMORYSTATUSEX memoryStatus;
    memoryStatus.dwLength = sizeof(memoryStatus);

    if (GlobalMemoryStatusEx(&memoryStatus))
    {
        unsigned long long totalRAM =
            memoryStatus.ullTotalPhys / (1024ULL * 1024ULL);

        unsigned long long availableRAM =
            memoryStatus.ullAvailPhys / (1024ULL * 1024ULL);

        unsigned long long usedRAM =
            totalRAM - availableRAM;

        cout << "\nRAM:\n";

        cout << "Total RAM: "
             << totalRAM << " MB\n";

        cout << "Used RAM: "
             << usedRAM << " MB\n";

        cout << "Available RAM: "
             << availableRAM << " MB\n";
    }
    else
    {
        errorMessage();
    }

    pauseScreen();
}

void showDiskSpace()
{
    cout << "\n";
    cout << "DISK SPACE\n\n";

    ULARGE_INTEGER freeBytes;
    ULARGE_INTEGER totalBytes;
    ULARGE_INTEGER totalFreeBytes;

    if (GetDiskFreeSpaceExA(
            "C:\\",
            &freeBytes,
            &totalBytes,
            &totalFreeBytes))
    {
        unsigned long long totalGB =
            totalBytes.QuadPart /
            (1024ULL * 1024ULL * 1024ULL);

        unsigned long long freeGB =
            totalFreeBytes.QuadPart /
            (1024ULL * 1024ULL * 1024ULL);

        unsigned long long usedGB =
            totalGB - freeGB;

        cout << "Drive: C:\\\n\n";

        cout << "Total Space: "
             << totalGB << " GB\n";

        cout << "Used Space: "
             << usedGB << " GB\n";

        cout << "Free Space: "
             << freeGB << " GB\n";
    }
    else
    {
        errorMessage();
    }

    pauseScreen();
}

void showBattery()
{
    cout << "\n";
    cout << "BATTERY STATUS\n\n";

    SYSTEM_POWER_STATUS powerStatus;

    if (GetSystemPowerStatus(&powerStatus))
    {
        if (powerStatus.BatteryLifePercent != 255)
        {
            cout << "Battery Level: "
                 << (int)powerStatus.BatteryLifePercent
                 << "%\n";

            if (powerStatus.ACLineStatus == 1)
            {
                cout << "Power: Connected to charger\n";
            }
            else
            {
                cout << "Power: Running on battery\n";
            }
        }
        else
        {
            cout << "Battery information is not available.\n";
        }
    }
    else
    {
        errorMessage();
    }

    pauseScreen();
}

void showDateTime()
{
    cout << "\n";
    cout << "DATE & TIME\n\n";

    system("echo Current Date and Time:");
    system("date /t");
    system("time /t");

    pauseScreen();
}