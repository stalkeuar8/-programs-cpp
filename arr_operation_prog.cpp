
#include <iostream>
using namespace std;

int main()
{
	cout << "Hi! It is a program that works with arrays! Lets start!\n\nFirstly, you have to know an amount of elements in array!\n";
	cout << "Would you like to enter it on your own, or you want program to generate it?\n";
	cout << "(Choose 1 for the first variant, or 2 for the second)\n" << "\nEnter your choice: ";

	int n;
	int choice1;
	bool isChosen1 = false;
	

	while (!isChosen1) {
		cin >> choice1;
		switch (choice1) {
		case 1: 
			cout << "You have chosen to enter it by yourself!\nPlease, enter: ";
			cin >> n;
			cout << "\nAwesome! Array will contain " << n << " elements!";
			isChosen1 = true;
			break;
		case 2:
			{	
			cout << "You have chosen to generate it by random!";
			srand(time(NULL));
			int min;
			cout << "\nEnter min number: ";
			cin >> min;
			int max;
			cout << "\nEnter max number: ";
			cin >> max;
			cout << endl;
			n = min + rand() % (max - min + 1);
			cout << "Generated number is: " << n << endl;
			cout << "\nArray will contain " << n << " elements!";
			isChosen1 = true;
			}
			break;
		default: cout << "Wrong number entered! Reenter: ";
			isChosen1 = false;
		}
	}

	int* arr = new int[n];

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "Enter " << i + 1  << " element: ";
		cin >> arr[i];
	}

	cout << "\nGood! There are an array: ";

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	int choice2;
	bool isChosen2 = false;
	
	cout << "\n\nNow you can choose the operation, that you would like to do with array!";
	cout << "\n\n0 - stop the program. ";
	cout << "\n1 - calculate the sum of the elements of array. ";
	cout << "\n2 - define minimal and maximal element in the array. ";
	cout << "\n3 - sort elements from low to high. ";
	cout << "\n4 - sort elements from high to low. ";
	cout << "\n5 - output only even elements. ";
	cout << "\n6 - output only odd elements. ";
	cout << "\n\nEnter your choice: ";

	while (!isChosen2) {
		cin >> choice2;
		switch (choice2) {
		case 0:
			cout << "The program is stopped!";
			cout << endl << endl;
			isChosen2 = true;
			break;
		case 1:
			cout << "You have chosen to calculate the sum of the elements of array. " << endl;
			{
				int sum = 0;
				for (int i = 0; i < n; i++) {
					sum += arr[i];
				}
				cout << "The sum is: " << sum << endl;
			}
			isChosen2 = true;
			break;
		case 2:
			cout << "You have chosen to define minimal and maximal element in the array. " << endl;
			{
				int min_arr = arr[0];
				int max_arr = arr[0];
				for (int i = 0; i < n; i++) {
					if (arr[i] < min_arr) {
						min_arr = arr[i];
					}
					else if (arr[i] > max_arr) {
						max_arr = arr[i];
					}
				}
				cout << "The minimal element is: " << min_arr << endl;
				cout << "The maximal element is: " << max_arr << endl;
			}
			isChosen2 = true;
			break;
		case 3:
			cout << "You have chosen to sort elements from low to high. " << endl;
			{
				int temp = 0;
				for (int i = 0; i < (n - 1); i++) {
					for (int j = 0; j < (n - 1); j++) {
						if (arr[j] > arr[j + 1]) {
							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}
				cout << "The sorted (from low to high) array is: ";
				for (int i = 0; i < n; i++) {
					cout << arr[i] << " ";
				}
			}
			isChosen2 = true;
			break;
		case 4:
			cout << "You have chosen to sort elements from high to low. " << endl;
			{
				int temp = 0;
				for (int i = 0; i < (n - 1); i++) {
					for (int j = 0; j < (n - 1); j++) {
						if (arr[j] < arr[j + 1]) {
							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}
				cout << "The sorted (from high to low) array is: ";
				for (int i = 0; i < n; i++) {
					cout << arr[i] << " ";
				}
			}
			isChosen2 = true;
			break;
		case 5:
			cout << "You have chosen to output only even elements. " << endl;
			cout << "The even elements are: ";
			{
				for (int i = 0; i < n; i++) {
					if (arr[i] % 2 == 0) {
						cout << arr[i] << " ";
					}
					else {
						continue;
					}
				}
			}
			isChosen2 = true;
			break;
		case 6: 
			cout << "You have chosen to output only odd elements. " << endl;
			cout << "The odd elements are: ";
			{
				for (int i = 0; i < n; i++) {
					if (arr[i] % 2 != 0) {
						cout << arr[i] << " ";
					}
					else {
						continue;
					}
				}
			}
			isChosen2 = true;
			break;
		default: cout << "Wrong number entered! Reenter: ";
			isChosen2 = false;
		}
	}
	cout << endl << endl;
	cout << "Thank you for using our program!\n\n ";

	delete[] arr;
}

