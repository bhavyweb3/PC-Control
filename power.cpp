#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "power.h"

using namespace std;

void lockPC()
{
    cout << "\nLOCKING COMPUTER...\n";

    Sleep(1000);

    system("rundll32.exe user32.dll,LockWorkStation");
}

void showUserInfo()
{
    cout << "\n";
    cout << "USER & PC INFORMATION\n\n";

    cout << "Username: ";
    system("echo %USERNAME%");

    cout << "Computer Name: ";
    system("hostname");

    cout << "\nWindows Version:\n";
    system("ver");

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void shutdownPC()
{
    cout << "\n";
    cout << "WARNING: SHUTDOWN COMPUTER\n\n";

    cout << "Your computer will shut down in 10 seconds.\n";
    cout << "Do you want to continue? (Y/N): ";

    char confirm;
    cin >> confirm;
    cin.ignore();

    if (confirm == 'Y' || confirm == 'y')
    {
        cout << "\nShutdown scheduled.\n";

        system("shutdown /s /t 10");
    }
    else
    {
        cout << "\nShutdown cancelled.\n";

        cout << "Press ENTER to continue...";
        cin.get();
    }
}

void restartPC()
{
    cout << "\n";
    cout << "WARNING: RESTART COMPUTER\n\n";

    cout << "Your computer will restart in 10 seconds.\n";
    cout << "Do you want to continue? (Y/N): ";

    char confirm;
    cin >> confirm;
    cin.ignore();

    if (confirm == 'Y' || confirm == 'y')
    {
        cout << "\nRestart scheduled.\n";

        system("shutdown /r /t 10");
    }
    else
    {
        cout << "\nRestart cancelled.\n";

        cout << "Press ENTER to continue...";
        cin.get();
    }
}