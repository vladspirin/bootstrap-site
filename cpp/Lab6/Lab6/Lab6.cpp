// Lab6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Program 1
	cout << "Program 1" << endl << endl;
	cout << "Please enter the variable: " << endl << endl;
	int a;
	cin >> a;
	if (a % 2 == 0) cout << "Your variable is paired" << endl << endl;
	else cout << "Your variable isn't paired" << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2" << endl << endl;
	cout << "Please enter variable's: " << endl << endl;
	int b, c;
	cin >> b >> c;
	if (b > c) cout << b << " > " << c << endl << endl;
	if (c > b) cout << c << " > " << b << endl << endl;
	if (b == c) cout << "b = c" << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;
	cout << "Please enter the variable: " << endl << endl;
	int d;
	cin >> d;
	if (d < 0) cout << "Your number is negative" << endl << endl;
	if (d == 0) cout << "Your number is = 0" << endl << endl;
	if (d > 0) cout << "You have positive real number" << endl << endl;
	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4" << endl << endl;
	cout << "Please enter variable's: " << endl << endl;
	int e, h;
	cin >> e >> h;
	(e == h) ? cout << e << " = " << h << endl << endl : cout << e << " != " << h << endl << endl;
	(e > h) ? cout << e << endl << h << endl : cout << h << endl << e << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;
	cout << "Please enter the variable: " << endl << endl;
	int f;
	(f >= -2 && f <= 4) ? cout << "Your variable falls into the range" : cout << "Not correct";
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
    return 0;
}

