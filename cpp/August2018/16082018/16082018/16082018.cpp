// 16082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
	// Program 1
	cout << "Program 1" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int month = 6; double profit[month], sum1 = 0; 
	cout << "Please enter month profit of company: " << endl;
	// Заполняем массив
	for (int i1 = 0; i1 < month; i1++) cin >> profit[i1];
	// Проводим вычисления
	for (int j1 = 0; j1 < month; j1++) sum1 += profit[j1];
	// Выводим результат пользователю
	cout << "Income of the company for 6 months = " << sum1 << endl << endl;
	system("pause");
	system("cls");
	
	// Program 2
	cout << "Program 2" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int n2 = 5; int a2[n2];
	cout << "Please specify the number of seats in the array: " << endl;
	// Заполняем массив
	for (int j2 = 0; j2 < n2; j2++) cin >> a2[j2];
	// Выводим массив пользователю в обратном порядке
	for (int i2 = n2 - 1; i2 >= 0; i2--) cout << a2[i2] << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int x3 = 5; int side[x3], sum3 = 0;
	cout << "Please enter side of pentagon: " << endl;
	// Заполняем массив
	for (int i3 = 0; i3 < x3; i3++) cin >> side[i3];
	// Проводим вычисления
	for (int j3 = 0; j3 < x3; j3++) sum3 += side[j3];
	// Выводим результат пользователю
	cout << sum3 << endl << endl;
	system("pause");
	system("cls");
	
	// Program 4 
	cout << "Program 4" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	int min, max, mN, mX; const int monthIndex = 12; int profit4[monthIndex];
	cout << "Please enter month profit of company: " << endl;
	// Заполняем массив данными о доходах фирмы за 12 месяцев
	for (int i4 = 0; i4 < monthIndex; i4++) cin >> profit4[i4];
	// Отталкиваемся от первого индекса в массиве
	min = max = profit4[0];
	// Проходим уже по готовому массиву в поисках минимального и максимального + определяем их индексы
	for (int j4 = 1; j4 < monthIndex; j4++) {
		if (min > profit4[j4]) { min = profit4[j4]; mN = j4;}
		if (max < profit4[j4]) { max = profit4[j4]; mX = j4;}
	}
	// Выводим результат пользователю
	cout << "Result: " << endl << " min = " << min << " minMonthIndex = " << mN;
	cout << endl << " max = " << max << " maxMonthIndex = " << mX << endl << endl;
	system("pause");
	system("cls");
	
	// Program 5
	cout << "Program 5" << endl << endl;
	srand(time(0));
	// Обьявляем переменные, инициализируем массив
	const int n5 = 10;  int a5[n5];
	cout << "This is a random array: " << endl << endl;
	cout << "Index" << "\t\t" << "Element" << endl;
	// Заполняем массив случайными числами (тут я нашел :) готовые функции)
	for (int i5 = 0; i5 < n5; i5++) {
		a5[i5] = rand() % 100; // Заполняем массив случайными значениями в диапазоне от 0 до 100
		// Проверяю произвольный диапазон вхождения елементов в массив и вывожу результат пользователю
		if (a5[i5] > 5 && a5[i5] < 30) { cout << "arr[" << i5 << "]" << "\t\t" << a5[i5] << endl; }
	} cout << endl;
	system("pause");
	system("cls");
	
	// Program 6
	cout << "Program 6" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int n6 = 7;  int a6[n6] = {3, -6, 8, -35, 21, -1, 12};
	cout << "Negative number: " << endl;
	// Проходим циклом по массиву в поисках негативных чисел и выводим их пользователю
	for (int i6 = 0; i6 < n6; i6++) if (a6[i6] < 0) cout << a6[i6] << endl;
	system("pause");
	system("cls");
	
	// Program 7
	cout << "Program 7" << endl << endl;
	srand(time(0));
	// Обьявляем переменные, инициализируем массив
	const int n7 = 10;  int a7[n7];
	cout << "This is a random array (from -10 to 10): " << endl << endl;
	// Заполняем массив случайными числами
	for (int i7 = 0; i7 < n7; i7++) {
		a7[i7] = rand() % 10 - rand() % 10; // Заполняем массив случайными значениями в диапазоне от -10 до 10 включительно
		// Проверяю на минусовые значения и вывожу их пользователю 
		if (a7[i7] < 0) { cout << "arr[" << i7 << "]" << "\t\t" << a7[i7] << endl; }
    }
	for (int j7 = 0; j7 < n7; j7++) {
		// Проверяю на плюсовые значения и вывожу их пользователю 
		if (a7[j7] > 0) { cout << "arr[" << j7 << "]" << "\t\t" << a7[j7] << endl; }
	}
	cout << endl;
	system("pause");
	system("cls");
	
	// Program 8 // Еще не закончил, программа правильная но результат не тот пока-что. Не могу понять где сделал логическую ошибку
	cout << "Program 8" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int n8 = 10;  int a8[n8]; bool x8 = true;
	// Заполняем массив и проверяем на нулевые элементы, меняем булиевое значение если условие выполняется 
	for (int i8 = 0; i8 < n8; i8++) if (a8[i8] == 0) { x8 = false; break; }
	// Выводим пользователю результат
	cout << x8 << endl;
	system("pause");
	system("cls");
	
	// Program 9 
	cout << "Program 9" << endl << endl;
	srand(time(0));
	// Обьявляем переменные, инициализируем массив
	const int n9 = 10;  int a9[n9]; int min9, max9, mX9, mN9, sum9 = 0;
	cout << "This is a random array (from 0 to 50): " << endl << endl;
	// Заполняем массив случайными числами
	for (int i9 = 0; i9 < n9; i9++) {
		a9[i9] = rand() % 50; // Заполняем массив случайными значениями в диапазоне от 0 до 50
		// Выводим пользователю массив
		cout << a9[i9] << " ";}
	// Отталкиваемся от первого индекса в массиве
	min9 = max9 = a9[0];
	// Проходим уже по готовому массиву в поисках минимального и максимального + определяем их индексы
	for (int j9 = 1; j9 < n9; j9++) {
		if (min9 > a9[j9]) { min9 = a9[j9]; mN9 = j9; }
		if (max9 < a9[j9]) { max9 = a9[j9]; mX9 = j9; }
	}
	// Выводим результат пользователю минимальное и максимальное значение + их индексы
	cout << endl << "Result: " << endl << " minElement = " << min9 << " minIndex = " << mN9 <<  " maxElement = " << max9 << " maxIndex = " << mX9 << endl;
	// Находим сумму элементов массива между минимальным и максивальным элементами
	for (int k9 = mX9 + 1; k9 < mN9; k9++) { 
		sum9 += a9[k9];
	}
	// Выводим сумму элементов пользователю
	cout << "Sum = " << sum9 << endl;
	system("pause");
	system("cls");
		
	// Program 10
	cout << "Program 10" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int N = 100; int a[N], b[N], S = 0, i, n;
	cout << "Enter the number of values in the array: "; cin >> n; // фактическое количество
	// Заполняем 1 массив
	for (i = 0; i < n; i++) cin >> a[i];
	// Заполняем 2 массив
	for (i = 0; i < n; i++) cin >> b[i];
	// Проводим вычисления и выводим результат пользователю
	for (i = 0; i < n; i++) S += a[i] * b[i]; cout << "Your result is = " << S << endl << endl;
	system("pause");
	return 0;
}
