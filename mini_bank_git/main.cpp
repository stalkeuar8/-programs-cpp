#include <iostream>
#include "function.h"
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
using namespace std;

int main()
{
    int choice;
    bool end = false;
    hello();
    double balance = 0.0;
    string history[10];
    int count = 0;

    while (!end) {
        showMenu();
        cin >> choice;
        if (choice > 5 || choice < 1) {
            cout << "Invalid choice! Please try again." << endl;
            continue;
        }
        switch (choice) {
        case 1:
            cout << "Current balance: " << balance << " USD" << endl;
            continue;
        case 2:
            {
            double money = 0;
            balance = plus_money(balance, count, history);
            cout << balance << " USD" << endl;
            }
            continue;
        case 3: 
            {
            double money = 0;
            balance = minus_money(balance, count, history);
            cout << balance << " USD" << endl;
            }
            continue;
        case 4:
            showHistory(history, count);
            continue;
        case 5:
            cout << "\n\nThank you for using our program!\n\n";
            end = true;
            return 0;
        }



    }
}

