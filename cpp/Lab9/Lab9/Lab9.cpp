// Lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	
	int n, j, z; 
	cout << "Please enter amount of iterations: ";
	cin >> n;
	for (j = 2; j < n; j += 2) {
		cout << "Pared number result: " << j << "\n";
	
	}
	
	system("pause");
	system("cls");
	
	// Program 2
	int number;
	cout << "Please enter number: \n";
	cin >> number;
	(number % 2 == 0) ? cout << "Pared\n" : cout << "Not pared\n";

	system("pause");
	system("cls");
	
	// Program 3
	/*
	system("pause");
	system("cls");

	// Program 4

	system("pause");
	system("cls");

	// Program 5

	system("pause");
	system("cls");
	*//*
	// Program 6
	int n1, k = 0, n2;
	cin >> n1;
	n2 = n1;
	while (n2 != 0) {
		k++;
		n2 /= 10;
	}
	
	
	int n1, n2;
	cin >> n1;
	for (int itr = 1; itr < n1; itr++)
		cout << n1 << endl << endl;
	*//*
	system("pause");
	system("cls");
	
	// Program 7

	system("pause");
	system("cls");

	// Program 8

	system("pause");
	system("cls");

	// Program 9

	system("pause");
	system("cls");

	// Program 10

	system("pause");
	system("cls");

	// Program 11

	system("pause");
	system("cls");

	// Program 12

	system("pause");
	system("cls");
	*/
    return 0;
}

