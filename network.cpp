#include <iostream>
#include <cstdlib>
#include "network.h"

using namespace std;

void checkInternet()
{
    cout << "\n";
    cout << "INTERNET CONNECTION\n\n";

    cout << "Checking connection...\n\n";

    if (system("ping -n 1 google.com >nul") == 0)
    {
        cout << "[+] Internet: CONNECTED\n";
    }
    else
    {
        cout << "[!] Internet: NOT CONNECTED\n";
    }

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void showIP()
{
    cout << "\n";
    cout << "NETWORK INFORMATION\n\n";

    system("ipconfig");

    cout << "\nPress ENTER to continue...";
    cin.get();
}