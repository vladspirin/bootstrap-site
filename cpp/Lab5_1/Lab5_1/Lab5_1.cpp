
// Lab5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <limits.h>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1 "<< endl << endl;
	int a, b, c, sum, op, average;	
	cout << "Please enter variables: " << endl << endl;
	cin >> a >> b >> c;
	sum = a + b + c;
	op = a * b * c;
	average = (a + b + c) / 3;
	cout << "Result: " << sum << endl << endl;
	cout << "Result: " << op << endl << endl;
	cout << "Result: " << average << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2 " << endl << endl;
	int amount;
	float s, per, bill;
	cout << "Please enter the price of one laptop: " << endl << endl;
	cin >> amount;
	cout << "Please enter the amount of laptops: " << endl << endl;
	cin >> s;
	cout << "Please enter a discount percentage: " << endl << endl;
	cin >> per;
	bill = (amount * s) - (amount * s * per / 100);
	cout << "The total cost of the order is: "<< bill << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3 " << endl << endl;
	double salary, deal, percent, constsalary = 100;
	cout << "Please enter total cost of manager deals per month: " << endl << endl;
	cin >> deal;
	percent = deal * 1.05;
	salary = deal * percent / 100 + constsalary;
	cout << "Salary: " << salary << endl << endl;
	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4 " << endl << endl;
	long double GB, KB, DSpeed, ConSpeed;
	int hour, min, sec, time;
	cout << "Please enter the size of one movie in GB: " << endl << endl;
	cin >> GB;
	cout << endl << "Please enter download speed in bit/s: " << endl << endl;
	cin >> ConSpeed;
	DSpeed = (ConSpeed / 8); 
	KB = (GB * 1024) * 1024;
	time =  KB / DSpeed;
	hour = time / 3600;
	min = time % 3600 / 60;
	sec = time % 60;
	cout << endl << "Download time = " << hour << ":" << min << ":" << sec << endl << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5 " << endl << endl;
	int x, y, z, k, n, f;
	cout << "Please enter variables: " << endl << endl;  
	// 1 equation
	cin >> x >> n;
	f = (1 + x) * ((pow(x, 2) - 0.86) / (2.43 + (1 / (1 + pow(x, 2))))) + (1.4761 * pow(n, 2) * x);
	cout << "Result = " << f << endl << endl;
	// 2 equation
	cout << "Please enter new variables: " << endl << endl;
	cin >> x >> n;
	f = pow(sin((x - (1 / sqrt(1 + pow(x, 2))))), 2)  + pow(cos((x / (1 + pow(x, 2))) + 0.75), 2);
	cout << "Result = " << f << endl << endl;
	// 3 equation
	cout << "Please enter new variables: " << endl << endl;
	cin >> x >> y;
	//f = ;




	system("pause");
	return 0;
}

