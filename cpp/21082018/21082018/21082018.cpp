// 21082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1 // ???????????????????????????????????????????????
	cout << "Program 1" << endl << endl;
	// Инициализируем массив
	int const n1 = 10; int a1[n1];
	// Запоняем массив
	for (int i1 = 0; i1 < n1; i1++) cin >> a1[i1];
	// Проходим по массиву 
	for (int j1 = 0 j1 < n1; j1++) {
		if (a1[j1] == 0) {
			for (int k1 = j1; k1 < n1 - 1; k1++) { a1[k1] = a1[k1 + 1]; n1--; }
		}
	}
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

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

	system("pause");
	return 0;
}