#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "utils.h"

using namespace std;

void setColor(int color)
{
    SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),
        color
    );
}

void resetColor()
{
    setColor(7);
}

void clearScreen()
{
    system("cls");
}

void pauseScreen()
{
    cout << "\n";

    setColor(8);
    cout << "Press ENTER to return to the main menu...";
    resetColor();

    cin.get();
}

void printLine()
{
    setColor(8);

    cout << "============================================================\n";

    resetColor();
}

void printHeader()
{
    setColor(11);

    cout << "============================================================\n";
    cout << "                                                            \n";
    cout << "                    PC - CONTROL                            \n";
    cout << "              SIMPLE WINDOWS UTILITY                        \n";
    cout << "                                                            \n";
    cout << "============================================================\n";

    resetColor();
}

void successMessage()
{
    setColor(10);
    cout << "\n[+] Operation completed successfully.\n";
    resetColor();
}

void errorMessage()
{
    setColor(12);
    cout << "\n[!] Operation failed.\n";
    resetColor();
}