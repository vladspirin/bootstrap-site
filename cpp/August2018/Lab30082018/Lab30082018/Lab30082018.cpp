// Lab30082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    // Program 1
	/*
	cout << "Program 1" << endl << endl;
	char x[][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };
	for (int i = 0; i < 5; i++) {
		cout << (int)x[i][] << " ";
		for (int j = 0; j < 5; j++) cout << (int)x[0][j] << " ";
		cout << endl;
	}
	system("pause"); 
	system("cls");
	// АЛГОРИТМ САЙТ
	*/
	// Program 2
	cout << "Program 2" << endl << endl;
	int const n2 = 5; int temp2; int a2[n2][n2];
	for (int i2 = 0; i2 < n2; i2++) {
		temp2 = a2[i2][0];
		a2[i2][0] = a2[i2][n2 - 1];
		a2[i2][n2 - 1] = temp2;
	}
	//cout << temp2 << endl;
	system("pause");
	system("cls");
	/**//*
	// Program 3
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;

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

	// Program 8
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	cout << "Program 9" << endl << endl;

	system("pause");
	system("cls");

	// Program 10
	cout << "Program 10" << endl << endl;

	system("pause");*/

	/*
	// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
	// test
	srand(time(0));
	int const n = 5; int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			cout << a[i][j] << " ";
		}
	}


	//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

	*/




	return 0;
}