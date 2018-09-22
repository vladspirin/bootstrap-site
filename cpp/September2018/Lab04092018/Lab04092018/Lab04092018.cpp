// Lab04092018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

void rectanglePaint(int, int);
int recursion(int);
void isHighestValue(int, int);
void isArrayFunc(int, int []); // ??????????????????????

double powFunc(int, int);
bool isSimpleNumber(int);

int main()
{
	// Program 1
	cout << "Program 1" << endl << endl;
	int a , b;
	cout << "Please enter 2 side of rectangle: ";
	cin >> a >> b; 
	rectanglePaint(a, b);
	cout << "Please enter 2 side of rectangle: ";
	cin >> a >> b;
	rectanglePaint(a, b);
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2" << endl << endl;
	int n2;
	cout << "Please enter your variable: ";	cin >> n2;
	cout << recursion(n2) << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;
	int a3, b3;
	cout << "Please enter first variable: "; cin >> a3;
	cout << "Please enter second variable: "; cin >> b3;
	isHighestValue(a3, b3);
	cout << endl << endl;
	system("pause");
	system("cls");
	
	// Program 4
	cout << "Program 4" << endl << endl;
	int arr[3][5]; int n4;
	cin >> n4;
	isArrayFunc(n4, "&&&&&&&&&&&&&&&&&&&&&");// In process
	system("pause");
	system("cls");
	/*
	// Program 5

	system("pause");
	system("cls");

	// Program 6

	system("pause");
	system("cls");

	// Program 7

	system("pause");
	system("cls");
	*/
	// Program 8
	int z8;
	cout << "Please enter your variable: ";
	cin >> z8;
	bool r = isSimpleNumber(z8);
	cout << "Result: " <<  r<< endl;
	system("pause");
	system("cls");
	
	return 0;
}
// Function 1, Program 1
void rectanglePaint(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "*";
		cout << endl;
	}
}
// Function 2, Program 2
int recursion(int n) {
	// Условие входа и когда остановится
	if (n == 1) { return 1; }
	// Шаг рекурсии
	return recursion(n - 1) * n;
}
// Function 3, Program 3
void isHighestValue(int a, int b) {
	a > b ? cout << "Result: " <<  a <<  " > " <<  b :
	cout << "Result: " << a << " < " << b;
}
// Function 4, Program 4
void isArrayFunc(int n, int arr[][]) {
	int i, j, sum = 0;
	for (; i < n; i++)
		for (; j < n; j++) cout << arr[i][j];
}
// Function 5, Program 5

// Function 6, Program 6

// Function 7, Program 7
double powFunc(int a, int n) {
	if (a )
}
// Function 8, Program 8
bool isSimpleNumber(int n) {
	bool r;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) break;
		if (i >= n) r = 1;
		else r = 0;
		cout << "Result: "<< r << endl;
		return r;
	}
}