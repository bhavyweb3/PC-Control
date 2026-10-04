#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "utils.h"
#include "system.h"
#include "applications.h"
#include "network.h"
#include "power.h"

using namespace std;

void startupScreen()
{
    clearScreen();

    setColor(11);

    cout << "\n\n";
    cout << "============================================================\n";
    cout << "                                                            \n";
    cout << "                       PC-CONTROL                           \n";
    cout << "                                                            \n";
    cout << "                  Windows Utility Tool                      \n";
    cout << "                                                            \n";
    cout << "============================================================\n";

    resetColor();

    cout << "\nStarting";

    for (int i = 0; i < 3; i++)
    {
        Sleep(500);
        cout << ".";
    }

    Sleep(500);
}

// ============================================================
// MENU
// ============================================================

void showMenu()
{
    printHeader();

    cout << "\n";

    setColor(14);
    cout << "  SYSTEM\n";
    resetColor();

    cout << "  [1]  System Information\n";
    cout << "  [2]  CPU & RAM Usage\n";
    cout << "  [3]  Disk Space\n";
    cout << "  [4]  Battery Status\n";
    cout << "  [5]  Date & Time\n";

    cout << "\n";

    setColor(14);
    cout << "  APPLICATIONS\n";
    resetColor();

    cout << "  [6]  Open Default Browser\n";
    cout << "  [7]  Open VS Code\n";
    cout << "  [8]  Open YouTube\n";
    cout << "  [9]  Open Downloads\n";
    cout << "  [10] Open File Explorer\n";

    cout << "\n";

    setColor(14);
    cout << "  NETWORK\n";
    resetColor();

    cout << "  [11] Check Internet Connection\n";
    cout << "  [12] Show IP Address\n";

    cout << "\n";

    setColor(14);
    cout << "  SECURITY\n";
    resetColor();

    cout << "  [13] Lock PC\n";
    cout << "  [14] User & PC Information\n";

    cout << "\n";

    setColor(14);
    cout << "  POWER\n";
    resetColor();

    cout << "  [15] Shutdown PC\n";
    cout << "  [16] Restart PC\n";

    cout << "\n";

    setColor(12);
    cout << "  [17] Exit\n";
    resetColor();

    cout << "\n";

    printLine();

    setColor(10);
    cout << "  Select an option: ";
    resetColor();
}

// ============================================================
// MAIN
// ============================================================

int main()
{
    startupScreen();

    int choice;

    while (true)
    {
        clearScreen();

        showMenu();

        cin >> choice;
        cin.ignore();

        clearScreen();

        switch (choice)
        {
            case 1:
                printHeader();
                showSystemInfo();
                break;

            case 2:
                printHeader();
                showCpuRam();
                break;

            case 3:
                printHeader();
                showDiskSpace();
                break;

            case 4:
                printHeader();
                showBattery();
                break;

            case 5:
                printHeader();
                showDateTime();
                break;

            case 6:
                printHeader();
                openBrowser();
                break;

            case 7:
                printHeader();
                openVSCode();
                break;

            case 8:
                printHeader();
                openYouTube();
                break;

            case 9:
                printHeader();
                openDownloads();
                break;

            case 10:
                printHeader();
                openFileExplorer();
                break;

            case 11:
                printHeader();
                checkInternet();
                break;

            case 12:
                printHeader();
                showIP();
                break;

            case 13:
                printHeader();
                lockPC();
                break;

            case 14:
                printHeader();
                showUserInfo();
                break;

            case 15:
                printHeader();
                shutdownPC();
                break;

            case 16:
                printHeader();
                restartPC();
                break;

            case 17:

                clearScreen();

                setColor(11);

                cout << "\n";
                cout << "============================================================\n";
                cout << "\n";
                cout << "                 PC-CONTROL CLOSED\n";
                cout << "\n";
                cout << "              Thank you for using it!\n";
                cout << "\n";
                cout << "============================================================\n";

                resetColor();

                Sleep(1500);

                return 0;

            default:

                setColor(12);
                cout << "\n[!] Invalid option.\n";
                resetColor();

                Sleep(1000);
                break;
        }
    }

    return 0;
}