// bbu181spirin5lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1 " << endl << endl;
	int a, s, m, h, day, dif;
	cout << "Please enter time in seconds: ";
	cin >> a;
	day = a / 86400;
	h = a % 86400 / 3600;
	m = a % 86400 % 3600 / 60;
	s = a % 60;
	cout << "Result: " << day << ":" << h << ":" << m << ":" << s << endl << endl;
	dif = 86400 - a;
	cout << dif << endl << endl;
	day = 86400 / dif;
	h = dif % 86400 / 3600;
	m = dif % 86400 % 3600 / 60;
	s = dif % 60;
	cout << "Difference: " << day << ":" << h << ":" << m << ":" << s << endl << endl;
	system("pause");
	system("cls");

	//// Program 2
	//cout << "Program 1 " << endl << endl;


	//// Program 3
	//cout << "Program 1 " << endl << endl;


	//// Program 4
	//cout << "Program 1 " << endl << endl;



	//// Program 5
	//cout << "Program 1 " << endl << endl;


    return 0;
}

