// bbu181spirin4_1Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Program 1
	cout << "Program 1 " << endl << endl; 
	int n;
	double x, y;
	cout << "Please enter the number of year (example format - 2010): ";
	cin >> n;
	y = ceil((n % 4) * 0.25);
	x = 366 - y;
	cout << "Result: " << "In " << n << " year = " << x << " days" << endl << endl;
	system("pause");
	system("cls");
	
	// Program 2
	cout << "Program 2 " << endl << endl;
	int hrn, kop;
	cout << "Please enter amount of " << endl;
	cout << "hrn: ";
	cin >> hrn;
	cout << "kop: ";
	cin >> kop;
	kop = (kop / 1) % 100;
	cout << hrn << " hrn "<< kop << " kop" << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3 " << endl << endl;
	double b, c, h, S, V;
	cout << "Please enter edge 'a': ";
	cin >> b;
	cout << "Please enter edge 'b': ";
	cin >> c;
	cout << "Please enter height 'h': ";
	cin >> h;
	S = b * c;
	V = h * S;
	cout << endl << "The V of a rectangular parallelepiped is: " << V << endl << endl;
	system("pause");
	system("cls");

	// Program 4 
	cout << "Program 4 " << endl << endl;
	float city1, city2, dist;
	cout << endl << "Calculation of the distance between settlements." << endl;
	cout << "Please enter the required data: " << endl;
	cout << "Scale map (number of kilometers in one centimeter) - ";
	cin >> city1;
	cout << "The distance between points representing populated areas (cm) - ";
	cin >> city2;
	dist = city1 * city2;
	cout << "The distance between settlements: " << dist << endl << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5 " << endl << endl;
	double v, pi = 3.14;
	int r;
	cout << "please enter a ball radius: ";
	cin >> r;
	v = 0.75 * pi * pow(r, 3); 
	cout << "result: " << v << endl << endl;
	system("pause");
	system("cls");

	// programm 6  
	cout << "program 6 " << endl << endl;
	double z, z1, z2, a;
	cin >> a;
	z1 = pow(((1 + a + pow(a, 2)) / (2 * a + pow(a, 2))) + 2 - ((1 - a + pow(a, 2)) / (2 * a - pow(a, 2))), -1) * (5 - 2 * pow(a, 2));
	z2 = (4 - pow(a, 2)) / 2;
	z = ((sin(2 * a) + sin( 5* a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 *a), 2)));
	system("pause");
    return 0;
}

