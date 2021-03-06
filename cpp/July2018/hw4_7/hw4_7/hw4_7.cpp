// hw4_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{	
	// Program 1
	cout << "Please enter positive six-digit number (format: 000000): " << endl << endl;
	int sixDigit, num1, num2, num3, num4, num5, num6, sum1, sum2;
	cin >> sixDigit;
	if (sixDigit > 999999 || sixDigit < -999999) cout << endl << "Error! You enter a non-six-digit number." << endl << endl;
	if (sixDigit <= 999999 && sixDigit >= -999999) {
		num1 = sixDigit / 100000;
		sixDigit = sixDigit % 100000;
		num2 = sixDigit / 10000;
		sixDigit = sixDigit % 10000;
		num3 = sixDigit / 1000;
		sixDigit = sixDigit % 1000;
		num4 = sixDigit / 100;
		sixDigit = sixDigit % 100;
		num5 = sixDigit / 10;
		sixDigit = sixDigit % 10;
		num6 = sixDigit;
		sum1 = num1 + num2 + num3;
		sum2 = num4 + num5 + num6;
	}
	if (sum1 == sum2) cout << "You have a lucky number" << endl << endl;
	else cout << "You haven't a lucky number" << endl << endl;
	system("pause");
	system("cls");
	
	// Program 2
	int digit, d1, d2, d3, d4;
	printf("Please enter four-digit number (format: 0000): \n\n");
	scanf_s("%d", &digit);
	if (digit > 9999 || digit < -9999) printf("Error! You enter a non-four-digit number.\n\n");
	else {
		d1 = digit / 1000;
		digit = digit % 1000;
		d2 = digit / 100;
		digit = digit % 100;
		d3 = digit / 10;
		digit = digit % 10;
		d4 = digit;
	}
	printf("%d%d%d%d\n\n", d2, d1, d4, d3);
	system("pause");
	system("cls");
	
	// Program 3
	cout << "Please enter seven whole numbers: " << endl << endl;
	int n1, n2, n3, n4, n5, n6, n7;
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5 && n1 > n6 && n1 > n7) cout << n1 << " is maximum number" << endl << endl;
	else if (n1 < n2 && n2 > n3 && n2 > n4 && n2 > n5 && n2 > n6 && n2 > n7) cout << n2 << " is maximum number" << endl << endl;
	else if (n3 > n2 && n1 < n3 && n3 > n4 && n3 > n5 && n3 > n6 && n3 > n7) cout << n3 << " is maximum number" << endl << endl;
	else if (n4 > n2 && n4 > n3 && n1 < n4 && n4 > n5 && n4 > n6 && n4 > n7) cout << n4 << " is maximum number" << endl << endl;
	else if (n5 > n2 && n5 > n3 && n5 > n4 && n1 < n5 && n5 > n6 && n5 > n7) cout << n5 << " is maximum number" << endl << endl;
	else if (n6 > n2 && n6 > n3 && n6 > n4 && n6 > n5 && n1 < n6 && n6 > n7) cout << n6 << " is maximum number" << endl << endl;
	else cout << n7 << " is maximum number" << endl << endl;
	system("pause");
	system("cls");
	

	// Program 4
	int VplaineFuel = 300, minFuel, fuelAB, fuelBC, firstDistFuel;
	int distAB, distBC;
	int weight;
	cout << "Please enter distance (km) between points A and B: " << endl;
	cin >> distAB;
	cout << "Please enter distance (km) between points B and C: " << endl;
	cin >> distBC;
	cout << "Please enter weight in whole (kg): " << endl;
	cin >> weight;
	if (weight <= 500) { fuelAB = 1 * distAB; fuelBC = 1 * distBC; }
	else if (weight <= 1000) { fuelAB = 4 * distAB; fuelBC = 4 * distBC; }
	else if (weight <= 1500) { fuelAB = 7 * distAB; fuelBC = 7 * distBC; }
	else if (weight <= 2000) { fuelAB = 9 * distAB; fuelBC = 9 * distBC; }
	else if (weight > 2000) cout << "This is very big weight for our aircraft" << endl << endl;
	firstDistFuel = VplaineFuel - fuelAB;
	minFuel = fuelBC - firstDistFuel;
	if ((fuelAB > VplaineFuel) && ((VplaineFuel - firstDistFuel) < fuelBC)) cout << "Flight on the entered route is impossible" << endl << endl;
	cout << "The minimum amount of fuel for refueling the aircraft in point B is: " << minFuel << endl << endl;
	system("pause");
	return 0;
}

