#pragma once
#include <string>
using namespace std;

void showMenu();
void hello();
double plus_money(double balance, int &count, string history[]);
double minus_money(double balance, int &count, string history[]);
void showHistory(string text[], int count);
