// 2.4MidtermPractical-Browning.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
    cout << "                        I've got a riddle for you...\n\n"; 
    cout << "||                    Only one color, but not one size,                     ||";
    cout << "\n||              Stuck at the bottom, yet easily flies.                      ||";
    cout << "\n||   Present in sun, but not in rain, Doing no harm, and feeling no pain.   ||";
    cout << "\n\n                              What is it ? \n\n";
    cout << "   A. Men \n   B. A Shadow\n   C. A Picture\n   D. Wind\n\n";
    char ans; cin >> ans; bool done = false;
    while (!done)
    {
        if (ans == 'b' || ans == 'B')
        {
            done = true;
            cout << "\nThat's Right!\n";
        }
        else if(ans == 'a' || ans == 'A' || ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
        {
            done = true;
            cout << "\nThat's Wrong!\n";
        }
        else
        {
            cout << "\nInvalid Input. Try again... ";
        }

    }
}
