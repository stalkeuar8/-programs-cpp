#include <iostream>
#include "functions.h"
#include <string>
#include <windows.h>

using namespace std;

int main() {
	
	int n_1;
	cout << "\n-----1 task------ \n\n";
	cout << "Enter n: ";
	cin >> n_1;
	cout << "Factorial is: " << factorial(n_1) << endl;

	Sleep(500);

	cout << "\n-----2 task------ \n\n";
	const int size1 = 5;
	int arr1[size1] = { 5, 1, 6, 11, -1 };
	cout << "The max element in array is: " << findMax(arr1, size1) << endl;

	Sleep(500);

	cout << "\n-----3 task------ \n\n";
	string word;
	cout << "Enter word: ";
	cin >> word;
	
	bool res_pal = isPalindrome(word);
	if (res_pal) {
		cout << word << " is Palindrome!" << endl;
	}
	else {
		cout << word << " is  not Palindrome!" << endl;
	}

	Sleep(500);
	cout << "\n-----4 task------ \n\n";
	cout << "Enter R: ";
	double r;
	cin >> r;
	cout << "The square is: " << circle_square(r) << endl;

	Sleep(500);
	cout << "\n-----5 task------ \n\n";
	const int size2 = 3;
	int arr2[size2] = { 1, 2, 3 };
	cout << "The array sum is: " << arr_sum(arr2, size2) << endl;

	cout << "\nThe program is over! ";
}











