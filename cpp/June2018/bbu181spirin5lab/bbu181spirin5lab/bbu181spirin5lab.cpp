// bbu181spirin5lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1 " << endl << endl;
	int n, sec, min, hours, day, dif;
	cout << "Please enter time in seconds: ";
	cin >> n;
	day = n / 86400;
	hours = n % 86400 / 3600;
	min = n % 86400 % 3600 / 60;
	sec = n % 60;
	cout << "Result: " << day << ":" << hours << ":" << min << ":" << sec << endl << endl;
	dif = 86400 - n;
	cout << dif << endl << endl;
	day = 86400 / dif;
	hours = dif % 86400 / 3600;
	min = dif % 86400 % 3600 / 60;
	sec = dif % 60;
	cout << "Difference: " << day << ":" << hours << ":" << min << ":" << sec << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2 " << endl << endl;
	double pi = 3.141592, c;
	int S, d;
	float r;
	cout << "Please enter diameter: " << endl << endl;
	cin >> d;
	c = pi * d;
	cout << "Length: " << c << endl << endl;
	r = c / (2. * pi);
	S = pi * pow(r, 2);
	cout << "Result of 'S': "<< S << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3 " << endl << endl;
	// mathematical expression 1
	double x, res;
	float a, y;
	int m, b, p, t;
	cout << "Please enter variable 'a': " << endl << endl;
	cin >> a;
	x = sqrt((2 * a + sin(abs(3 * a))) / 3.56);
	res = cos(pow(x, 2)) * sin(2 * x - 1) + 4.29;
	cout << "res = " << res << endl << endl;
	// mathematical expression 2
	res = sin((3.2 + sqrt(1 + x)) / (abs(5 * x)));
	cout << "res = " << res << endl << endl;
	// mathematical expression 3
	res = cos(pow(x, 2.4) + 1) - abs(sin(2 * x) - 5.67);
	cout << "res = " << res << endl << endl;
	// mathematical expression 4
	res = 12.4 * sin(abs(x / 2.1)) - 8.3 * cos(1.2 * x);
	cout << "res = " << res << endl << endl;
	// mathematical expression 5
	res = 2 * sin(x) * sin(2 * x - 1.5) * cos(2 * x + 1.5) - 6;
	cout << "res = " << res << endl << endl;
	// mathematical expression 6
	t = pow(x, 1. / 3) + pow(a, 2);
	p = pow(x, 2) - sqrt(abs(x));	
	y = pow(p, 2) + pow(t, 4);
	cout << "y = " << y << endl << endl;
	// mathematical expression 7
	cout << "Please enter variables 'x' and 'a': " << endl << endl;
	cin >> x >> m;
	b = pow(x, 4) + pow(m, 2);
	a = sqrt(abs(x));
	y = pow(cos(a + sin(b)), 2);
	cout << "y = " << y << endl << endl;
	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4 " << endl << endl;
	double x1, x2, y1, y2, dist;
	cout << "Please enter the first coordinates x1, y1: " << endl << endl;
	cin >> x1 >> y1;
	cout << "Please enter the second coordinates x2, y2: " << endl << endl;
	cin >> x2 >> y2;
	dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "Distance between A and B: " << dist << endl << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5 " << endl << endl;
	int R, r1, r2;
	// for a parallel resistor connection
	cout << "This program is designed to calculate the resistance of the electric circuit for a parallel resistor connection: " << endl << endl;
	cout << "Please enter r1 and r2: " << endl << endl;
	cin >> r1 >> r2;
	R = ((r1 * r2) / (r1 + r2));
	cout << "Result: R = " << R << endl << endl;
	// for a series of resistances
	cout << "This program is designed to calculate the resistance of the electric circuit for a series of resistances: " << endl << endl;
	cout << "Please enter r1 and r2: " << endl << endl;
	cin >> r1 >> r2;
	R = r1 + r2;
	cout << "Result: R = " << R << endl << endl;
	system("pause");
	return 0;
}