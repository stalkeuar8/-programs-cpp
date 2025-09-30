#include <iostream>
#include <string>
using namespace std;

int factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}

int findMax(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

bool isPalindrome(string word) {
	int n = word.size();
	for (int i = 0; i < n/2; i++) {
		if (word[i] == word[n - i - 1]) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

double circle_square(double r) {
	double pi = 3.14159;
	return pi * r * r;
}

int arr_sum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}