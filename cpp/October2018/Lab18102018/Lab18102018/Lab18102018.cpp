#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

//void addRow(int size, int **arr) {
//
//};

int main()
{
	srand(time(0));
	// Program 1
	// Написати функцію, що добавляє рядок у кінець двомірного масиву.
	cout << "Program 1" << endl << endl;
	const int ROW = 5;
	const int COL = 5;
	int arr[ROW][COL]{ 0 };
	// вводим массив
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	// выводим массив
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	system("cls");
	/*
	// Program 2
	// Написати функцію, що добавляє рядок на початок двомірного масиву.	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3
	// Написати функцію, що добавляє рядок у вказану позицію двомірного масиву
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 4
	// Написати функцію, що вилучає рядок двомірного масиву заданий номером.
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	// Написати функцію, що обчислює добуток матриць С = А * B.
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	// Написати програму, яка визначає елементи матриці А розмірності n х m із мінімальним значенням
	// і відсортовує за зростанням відповідні рядки.
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	// Написати функцію, що у цілочисловій матриці А розмірності n х m замінює нулями елементи, які
	// розташовані на перетині рядків і стовпців, в яких є хоча б по одному нулю.
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	// Написати програму, яка шукає індекси всіх сідлових точок матриці. Сідлова точка – елемент
    // матриці, який є найбільшим у рядку і одночасно найменший в стовпці, або навпаки.
	cout << "Program 8" << endl << endl;

	system("pause");*/
    return 0; 
};