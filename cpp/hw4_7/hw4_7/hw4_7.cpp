// hw4_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	cout << "Please enter positive six-digit number (format: 000000): " << endl << endl;
	int sixDigit, num1, num2, num3, num4, num5, num6;
	cin >> sixDigit;
	if(sixDigit > 999999 || sixDigit < -999999) cout << endl << "Error! You enter a non-six-digit number." << endl << endl; 
	if(sixDigit <= 999999 && sixDigit >= -999999) cout << endl << "Checked " << endl << endl;
	

	system("pause");
	system("cls");
/*
	// Program 2
	cout << "Please enter your variables: " << endl << endl;


	system("pause");
	system("cls");

	// Program 3
	cout << "Please enter your variables: " << endl << endl;


	system("pause");
	system("cls");

	// Program 4
	cout << "Please enter your variables: " << endl << endl;


	system("pause");
	system("cls");*/
    return 0;
}

