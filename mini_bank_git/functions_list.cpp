#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void hello() {
    cout << "=====================================" << endl;
    cout << "   Welcome to the 'Mini-Bank'" << endl;
    cout << "=====================================" << endl;
    cout << "   Here you can:" << endl;
    cout << "   - deposit money" << endl;
    cout << "   - withdraw money" << endl;
    cout << "   - check your balance" << endl;
    cout << "   - view transaction history" << endl;
    cout << "=====================================" << endl;
}

void showHistory(string history[], int count) {
    if (count == 0) {
        cout << "\nNo transaction yet.\n";
    }
    else {
        cout << "\n--- Transaction history ---\n";
        for (int i = 0; i < count; i++) {
            cout << "Operation ID: " << i+1 << "  ====  " << history[i] << endl;
        }
    }
}

void showMenu() {
    cout << "\nMenu:" << endl;
    cout << "1 - Show balance" << endl;
    cout << "2 - Deposit money" << endl;
    cout << "3 - Withdraw money" << endl;
    cout << "4 - Transaction history" << endl;
    cout << "5 - Exit" << endl;
    cout << "----------------------------" << endl;
    cout << "Your choice: ";
}

double plus_money(double balance, int &count, string history[]) {
    while (true) {
        cout << "Enter amount to deposit (enter 0 to come back to menu): ";
        double money;
        cin >> money;
        if (money == 0) {
            cout << "Operation canceled! Current balance: ";
            return balance;
        }
        else if (money > 0) {
            balance += money;
            cout << "\nDeposit successful! " << endl;
            cout << "Your new balance: ";
            
            if (count < 10) {
                time_t now = time(0);
                char buffer[26];
                ctime_s(buffer, sizeof(buffer), &now);
                string curr_time(buffer);
                history[count] = "Deposit +" + (to_string(money)) + " USD" + " //// Status: successful   " + curr_time;
                count++;
            }
            return balance;
        }
        else {
            cout << "\nAmount must be greater than 0!" << endl;
            continue;
        }
    }
}

double minus_money(double balance, int &count, string history[]) {
    while (true) {
        cout << "\nEnter amount to withdraw (enter 0 to come back to menu): ";
        double money;
        cin >> money;
        if (money == 0) {
            cout << "Operation canceled! Current balance: ";
            return balance;
        }
        else if (money > 0) {
            if (balance < money) {
                cout << "\nInsufficient funds - you have ";
                cout << balance << " USD\nOperation cancelled." << endl;
                if (count < 10) {
                    time_t now = time(0);
                    char buffer[26];
                    ctime_s(buffer, sizeof(buffer), &now);
                    string curr_time(buffer);
                    history[count] = "Withdraw -" + (to_string(money)) + " USD" + " //// Status: cancelled   " + curr_time;
                    count++;
                }
                continue;
            }
            else {
                balance -= money;
                cout << "\nWithdraw successful! " << endl;
                cout << "Your new balance: ";
                if (count < 10) {
                    time_t now = time(0);
                    char buffer[26];
                    ctime_s(buffer, sizeof(buffer), &now);
                    string curr_time(buffer);
                    history[count] = "Withdraw -" + to_string(money) + " USD" + " //// Status: successful   " + curr_time;
                    count++;
                }
                return balance;
            }
        }
        else if (money < 0) {
            cout << "\nAmount must be greater than 0!" << endl;
            continue;
        }
    }
}

