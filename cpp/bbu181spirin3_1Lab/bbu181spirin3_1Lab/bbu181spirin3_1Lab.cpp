// bbu181spirin3_1Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Programm 1
	cout << "Name\t   :\" The war and the peace\"\n";
	cout << "Avtor\t   : L.N. Tolstoj\n";
	cout << "Izdatelstvo: Piter\n";
	cout << "Pages\t   :500\n" << endl;
	system("pause\n");
	system("cls");

	// Programm 2
	cout << endl << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << "                      Vremena goda                          " << (char)186 << endl;
	cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
	cout << (char)186 << "        Zima   " << (char)186 << "       Vesna   " << (char)186 << "      Leto   " << (char)186 << "       Osen   " << (char)186;
	cout << endl << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl <<endl;
	system("pause\n");
	system("cls");

	// Programm 3
	int a;
	cout << "Please enter the value of the variable: a = ";
	cin >> a;
	cout << "Result: " << pow(a, 3) << endl;
	cout << "Result: " << pow(a, 6) << endl;
	cout << "Result: " << pow(a, 5) << endl << endl;
	
	system("pause\n");
	system("cls");

	// Programm 4
	int x1, x2, x3, res;
	cout << "Please enter the value of the variables: x1, x2, x3 = \n";
	cin >> x1 >> x2 >> x3;
	res = (x1 + x2 + x3) / 3;
	cout << "Result: " << res << endl << endl;

	system("pause\n");
	system("cls");

	// Programm 5
	int n, b, c, d;
	cout << "Please enter the three-digit number: n = ";
	cin >> n;
	b = n / 100;
	n = n % 100;
	c = n / 10;
	n = n % 10;
	d = n;
	cout << "Result: " << n << endl << endl;

	system("pause\n");
	return 0;
}

