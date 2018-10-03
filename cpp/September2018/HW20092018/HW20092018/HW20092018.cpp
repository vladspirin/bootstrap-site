// HW20092018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    // Program 1 Meeting 25
	// Используя два указателя на массив целых чисел, скопировать один массив в другой.
	// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
	cout << "Program 1" << endl << endl;
	int arr1_1[10] = { 8, 54, 4, 81, 17, 25, 33, 12, 36, 10 }; int arr1_2[10] = {};
	int *p1_1 = arr1_1; int *p1_2 = arr1_2;
	cout << "First array: ";
	for (int i = 0; i < 10; i++) cout << arr1_1[i] << " ";
	cout << endl;
	cout << "Second array: ";
	for (int i = 0; i < 10; i++) cout << arr1_2[i] << " ";
	cout << endl;
	cout << "Copied first array to second: ";
	for (int i = 0; i < 10; i++) cout << (*(p1_2 + i) = *(p1_1 + i)) << " ";
	cout << endl;
	system("pause");
	system("cls");

	// Program 2 Meeting 25
	// Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
	// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3 Meeting 25
	// Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.
	// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 1 Meeting 26
	// Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).
	// Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массива A, которые не включаются в массив B, без повторений.
	cout << "Program 1" << endl << endl;

	system("pause");
	system("cls");

	// Program 2 Meeting 26
	// Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).
	// Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массивов A и B, которые не являются общими для них, без повторений.
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");
	return 0;
}
