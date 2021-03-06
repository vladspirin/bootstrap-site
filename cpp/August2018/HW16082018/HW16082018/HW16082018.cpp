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
	int const n1 = 10; int a1[n1]; int min1, max1;
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
	
	// Program 2 
	cout << "Program 2" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int monthIndex = 12; int profit[monthIndex]; int min2, max2, mN2, mX2, x2, y2;
	cout << "Please enter month profit of company: " << endl;
	// Заполняем массив данными о доходах фирмы за 12 месяцев
	for (int i2 = 0; i2 < monthIndex; i2++) cin >> profit[i2];
	// Пользователь вводит диапазон поиска прибыли по месяцам
	cout << "Please enter the search range (from 1 to 12 month): " << endl;
	cin >> x2 >> y2;
	// Отталкиваемся от первого заданного индекса
	min2 = max2 = profit[x2];
	// Делаем проверку на корректный ввод месяца
	if (x2 < 1 || y2 > 12) { cout << "Error! In standart Earth year only 12 months." << endl; }
	if (x2 >= 1 && y2 <= 12) {
		for (int j2 = x2 - 1; j2 < y2 - 1; j2++) {
			// Проходим по массиву в поисках минимального и максимального дохода + определяем индексы
			if (min2 > profit[j2]) { min2 = profit[j2]; mN2 = j2; }
			if (max2 < profit[j2]) { max2 = profit[j2]; mX2 = j2; }
		}
		// Выводим результат пользователю
		cout << "Result: " << " MinProfit = " << min2 << " MaxProfit = " << max2 << endl << endl;
	}
	system("pause");
	system("cls");

	// Program 3 // In process :) пока не работает 
	cout << "Program 3" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	int const n3 = 20; int a3[n3]; int min3, max3, mN3, mX3, prod3 = 1, sum3 = 1, sumNegative = 0;
	// Заполняем массив случайными цифрами в интервале от -50 до 100
	for (int i3 = 0; i3 < n3; i3++) {
		a3[i3] = rand() % 100 - rand() % 50;
		// Выводим пользователю заполненный массив
		cout << a3[i3] << " ";
	} cout << endl << endl;
	// Проходим по массиву
	for (int i3 = 0; i3 < n3; i3++) { 
		// Находим и суммируем все отрицательные элементы
		if (a3[i3] < 0) sumNegative += a3[i3];
	}
	// Выводим пользователю сумму негативных элементов 
	cout << "Sum of negative numbers = " << sumNegative << endl;
	// Находим минимальный и максимальный элемент массива + их индексы
	// Отталкиваемся от первого индекса массива
	min3 = max3 = a3[0];
	for (int i3 = 1; i3 < n3; i3++) {
		if (max3 < a3[i3]) { max3 = a3[i3]; mX3 = i3; }
		if (min3 > a3[i3]) { min3 = a3[i3]; mN3 = i3; }
	}
	cout << "MinElement = " << min3 << " Index = " << mN3 << " MaxElement = " << max3 << " Index = " << mX3 << endl;
	// Считаем произведение элементов, находящихся между min и max элементами.
	for (int i3 = mN3; i3 < mX3; ++i3) {
		sum3 *= a3[i3];
	}
	// Выводим пользователю результат произведения между min и max элементами.
	cout << sum3 << endl;
	// Находим и считаем произведение элементов с четными номерами.
	for (int i3 = 0; i3 < n3; i3 += 2) // тут не уверен в правильности хотел делать через if(a3[i3] % 2 == 0)
	{
		prod3 *= a3[i3];
	}
	// Выводим пользователю результат произведения элементов с четными номерами
	cout << prod3 << endl;
	// Считаем сумму элементов, находящихся между первым и последним отрицательными элементами.
	// Вносим дополнительную переменную для произведения элементов и присваиваем ей начальное значение 
	double product = 1;
	for (int i3 = 0; i3 < n3; i3++) {
		if (a3[i3] < 0) // Находим первое отрицательное число
		{
			i3++; // Переключаемся на следующий элемент
			while (a3[i3] > 0) // Пока не нашли второе отрицательное число
			{
				product *= a3[i3]; // Накапливаем произведение элементов
				i3++;
			}
			break; // Выход из цикла for
		}
	}
	// Выводим результат пользователю.
	cout << "Result of product negative numbers = " << product << endl;
	system("pause");
	system("cls");

	// Meeting 16
	// Program 4
	cout << "Program 4" << endl << endl;
	//  Объявляем наши массивы
	int arr4_1[10], arr4_2[5], arr4_3[5];  
	//  Заполняем исходный массив
	for (int i4 = 0; i4 < 10; i4++) {
		arr4_1[i4] = rand() % 41 - 20; // Всего 41 возможное значение, минимальное -20
		 // Выводим информацию пользователю
		cout << "Array1[" << i4 << "] = " << arr4_1[i4] << endl;
	} cout << endl;
	// Копируем данные в первый короткий массив
	for (int i4 = 0; i4 < 5; i4++) {
		arr4_2[i4] = arr4_1[i4];
		// Выводим информацию пользователю
		cout << "Array2[" << i4 << "] = " << arr4_2[i4] << endl;
	} cout << endl;
	// Копируем данные во второй короткий массив
	for (int i4 = 0; i4 < 5; i4++) {
		// Сдвигаем на пять элементов, которые уже скопированы
		arr4_3[i4] = arr4_1[i4 + 5];
		// Выводим информацию пользователю
		cout << "Array3[" << i4 << "] = " << arr4_3[i4] << endl;
	} cout << endl;
	system("pause");
	system("cls");
	
	// Program 5
	cout << "Program 5" << endl << endl;
	//  Объявляем наши массивы
	int const n5 = 10; int arr5_1[n5], arr5_2[n5], arr5_3[n5];
	// Заполняем массивы рандомными значениями
	for (int i5 = 0; i5 < n5; i5++) {
		arr5_1[i5] = rand() % 50;
		// Выводим информацию пользователю
		cout << "Array1[" << i5 << "] = " << arr5_1[i5] << endl;
	} cout << endl;
	for (int i5 = 0; i5 < n5; i5++) {
		arr5_2[i5] = rand() % 50;
		// Выводим информацию пользователю
		cout << "Array2[" << i5 << "] = " << arr5_2[i5] << endl;
	} cout << endl;
	// Проходим циклом по массиву, поэлементно суммируем и заносим в третий
	for (int i5 = 0; i5 < n5; i5++) {
		arr5_3[i5] = arr5_1[i5] + arr5_2[i5];
		// Выводим информацию пользователю
		cout << "Array3[" << i5 << "] = " << arr5_3[i5] << endl;
	} cout << endl;
	system("pause");
	return 0;
}
