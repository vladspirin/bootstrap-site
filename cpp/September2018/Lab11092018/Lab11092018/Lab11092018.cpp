#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    // Program 1
	cout << "Program 1" << endl << endl;// in process
	int n;
	cin >> n;
	int MinMaxFind(n);
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	cout << "Program 9" << endl << endl;

	system("pause");
	system("cls");

	// Program 10
	cout << "Program 10" << endl << endl;

	system("pause");
	return 0;
}
// Function 1 
int MinMaxFind(int arr[], int n) {
	int min, max, mX, mN;
	for (int i = 0; i < n; i++) cin >> arr[i];
	min = max = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) return  min = arr[i]; mN = i;
		if (max < arr[i]) return  max = arr[i]; mX = i;
		cout << arr[i] << " ";
	}
}
// Function 2 
// Function 3 
// Function 4 
// Function 5 
// Function 6 
// Function 7 
// Function 8 
// Function 9 
// Function 10 
