// HW16082018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// Meeting 15
	// Program 1
	cout << "Program 1" << endl << endl;
	srand(time(0));
	// Обьявляем переменные, инициализируем массив
	int const n1 = 10; int a1[n1]; int min1, max1, minIndex1, maxIndex1;
	// Заполняем массив случайными цифрами в интервале от 0 до 100
	for (int i1 = 0; i1 < n1; i1++) {
		a1[i1] = rand() % 100;
		// Выводим пользователю заполненный массив
		cout << a1[i1] << " ";
	} cout << endl << endl;
	// Отталкиваемся от первого индекса в массиве
	min1 = max1 = a1[0];
	//  Находим максимальный и минимальный элементы массива
	for (int j1 = 1; j1 < n1; j1++) {
		if (max1 < a1[j1]) max1 = a1[j1];
		if (min1 > a1[j1]) min1 = a1[j1];
	}
	// Выводим результат пользователю
	cout << "Result: " << " minElement = " << min1 << " maxElement = " << max1 << endl << endl;
	system("pause");
	system("cls");
	/*
	// Program 2
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Meeting 16
	// Program 4
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");
	*/
	return 0;
}
