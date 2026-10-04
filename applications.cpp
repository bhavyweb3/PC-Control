#include <iostream>
#include <cstdlib>
#include "applications.h"

using namespace std;

void openBrowser()
{
    cout << "\n[+] Opening default browser...\n";

    system("start \"\" \"https://www.google.com\"");

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void openVSCode()
{
    cout << "\n";

    if (system("where code >nul 2>&1") == 0)
    {
        cout << "[+] Opening VS Code...\n";

        system("start \"\" code");
    }
    else
    {
        cout << "[!] VS Code was not found.\n";
    }

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void openYouTube()
{
    cout << "\n[+] Opening YouTube...\n";

    system("start \"\" \"https://www.youtube.com\"");

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void openDownloads()
{
    cout << "\n[+] Opening Downloads folder...\n";

    system("explorer \"%USERPROFILE%\\Downloads\"");

    cout << "\nPress ENTER to continue...";
    cin.get();
}

void openFileExplorer()
{
    cout << "\n[+] Opening File Explorer...\n";

    system("explorer");

    cout << "\nPress ENTER to continue...";
    cin.get();
}