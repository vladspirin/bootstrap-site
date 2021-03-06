#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

const int SIZE = 10;

bool isLeapYear(int);
void isDate(int, int, int, int, int, int);
int average(int arr[]);
int isPosiviveOrNegativeNum(int arr[]);

int main()
{
	srand(time(0));
	// Program 1 Meeting 21
	// Написать функцию, которая принимает две даты (т.е. функция принимает шесть параметров) и вычисляет разность в днях между этими датами.
	// Для решения этой задачи необходимо также написать функцию, которая определяет, является ли год високосным.
	cout << "Program 1" << endl << endl;

	system("pause");
	system("cls");

	// Program 2 Meeting 21
	// Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.
	cout << "Program 2" << endl << endl;
	int arr2[SIZE]{0};
	cout << "Please enter your array: " << endl;
	for (int i = 0; i < SIZE; i++) { arr2[i] = rand() % 100; }
	cout << "The average of your array is ";
	cout << average(arr2);
	system("pause");
	system("cls");

	// Program 3 Meeting 21
	// Написать функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива.
	cout << "Program 3" << endl << endl;
	int arr3[SIZE]{ 0 }; 
	cout << "Please enter your array: " << endl;
	for (int i = 0; i < SIZE; i++) { arr3[i] = rand() % 100 - rand() % 10; }
	isPosiviveOrNegativeNum(arr3);
	system("pause");
	system("cls");

	// Program 1 Meeting 22
	// Написать функцию, реализующую алгоритм линейного поиска заданного ключа в одномерном массиве.
	cout << "Program 1" << endl << endl;

	system("pause");
	system("cls");

	// Program 2 Meeting 22
	// Написать функцию, реализующую алгоритм бинарного поиска заданного ключа в одномерном массиве.
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3 Meeting 22
	// Написать функцию для перевода числа, записанного в двоичном виде, в десятичное представление.
	cout << "Program 3" << endl << endl;

	system("pause");
	return 0;
}

bool isLeapYear(int y) {
	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
};
void isDate(int, int, int, int, int, int) {
	
};

int average(int arr[]) {
	int sum = 0; int aver;
	for (int i = 0; i < SIZE; i++) { arr[i] += sum; }
	aver = sum / SIZE;
	return aver;
};

int isPosiviveOrNegativeNum(int arr[]) {
	int count = 0;
	for (int i = 0; i < SIZE; i++) {
		// пройтись счетчиком внутри цикла и собрать количество входов + - 0
	}
};