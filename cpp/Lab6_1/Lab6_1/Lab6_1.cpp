// Lab6_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	cout << "Please enter variables from 2 to 5: " << endl << endl;
	int q, w, e, r, res;
	cin >> q >> w >> e >> r;
	res = (q + w + e + r ) / 4;
	if (res >= 4 && res < 6) cout << "You are admitted" << endl << endl;
	else if (res < 4 && res > 1) cout << "You aren't admitted" << endl << endl;
	else cout << "Not correct" << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Please enter variables: " << endl << endl;
	int number;
	cin >> number;
	(number % 2 == 0) ? number *= 3 : number /= 2;
	cout << "Result: your number is equal " << number << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Please enter variables: " << endl << endl;
	int a, b;
	float c;
	char d;
	cin >> a >> d >> b;
	switch (d)
	{
	case '+': c = a + b; break;
	case '-': c = a - b; break;
	case '/': c = (float)a / b; break;
	case '*': c = a * b; break;
	default: cout << "This is not correct operation"; break;
	}
	cout << "Result = " << c;
	system("pause");
	system("cls");
	
	// Program 4
	cout << "Please enter four-digit number (format 0000): " << endl << endl;
	int num, sum1, sum2, num1, num2, num3, num4;
	cin >> num;
	num1 = num / 1000;
	num = num % 1000;
	num2 = num / 100;
	num = num % 100;
	num3 = num / 10;
	num = num % 10;
	num4 = num;
	sum1 = num1 + num2;
	sum2 = num3 + num4;
	(sum1 == sum2) ? cout << "Yes" << endl : cout << "No" << endl;
	system("pause");
	system("cls");
	
	// Program 5
	cout << "Please enter number of day from 1 to 7: " << endl << endl;
	int day;
	cin >> day;
	switch (day)
	{
	case 1 : cout << "Monday" << endl << endl; break;
	case 2 : cout << "Tuesday" << endl << endl; break;
	case 3 : cout << "Wednesday" << endl << endl; break;
	case 4 : cout << "Thuesday" << endl << endl; break;
	case 5 : cout << "Friday" << endl << endl; break;
	case 6 : cout << "Saturday" << endl << endl; break;
	case 7 : cout << "Sunday" << endl << endl; break;
	default: cout << "Isn't correct day" << endl << endl; break;
	}
	system("pause");
	system("cls");

	// Program 6
	cout << "Please enter number of day from 1 to 7: " << endl << endl;
	int days;
	cin >> days;
	switch (days)
	{
	case 1: cout << "Monday" << ": Go to the gym" << endl << endl; break;
	case 2: cout << "Tuesday" << ": Buy fruits on the market" << endl << endl; break;
	case 3: cout << "Wednesday" << ": Do housework" << endl << endl; break;
	case 4: cout << "Thuesday" << ": Trip to Kiev" << endl << endl; break;
	case 5: cout << "Friday" << ": Back home after visit Kiev" << endl << endl; break;
	case 6: cout << "Saturday" << ": Visit my parents" << endl << endl; break;
	case 7: cout << "Sunday" << ": Complete homework from courses" << endl << endl; break;
	default: cout << "Isn't correct day"; break;
	}
	system("pause");
    return 0;
}

