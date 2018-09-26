// HW23082018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void bubbleSort(int *, int);

int main()
{
	/*
	// Program 1 Meeting 17
	cout << "Program 1" << endl << endl;
	int const N = 10;
	int icq[N] = { 660419, 325021, 405734, 948190, 396203, 664091, 524420, 405664, 831810, 459950 };
	int phoneNumber[N] = {5555555, 3333333, 1111111, 4444444, 2222222, 7777777, 6666666, 8888888, 9999999, 9898888};
	cout << "ICQ numbers: "; 
	for (int i = 0; i < N; i++) cout << icq[i] << " ";
	cout << endl;
	cout << "Phone Numbers: ";
	for (int i = 0; i < N; i++) cout << phoneNumber[i] << " ";
	cout << endl;
	for (int i = 0; i < N; i++) {

		switch (???)
		{
		case 1: cout << "Masha";
		case 2: cout << "Dasha";
		case 3: cout << "Ksyusha";
		case 4: cout << "Kesha";
		case 5: cout << "Gosha";
		case 6: cout << "Sasha";
		case 7: cout << "Pasha";
		case 8: cout << "Petr";
		case 9: cout << "Paul";
		case 10: cout << "Roma";
		default: cout << "Error!";
			break;
		}
	}
	system("pause");
	system("cls");
	*/
	// Program 1 Meeting 18
	cout << "Program 1" << endl << endl;
	srand(time(0));
	int size_array;
	cout << "Please enter size of array: ";	cin >> size_array;
	cout << "Your array: " << endl;
	int *sorted_array = new int[size_array]; // одномерный динамический массив
	for (int counter = 0; counter < size_array; counter++)
	{
		sorted_array[counter] = rand() % 50; // заполняем массив случайными числами
		cout << setw(2) << sorted_array[counter] << "  "; // вывод массива на экран
	}
	cout << endl << endl;
	cout << "Your sorted array: " << endl;
	bubbleSort(sorted_array, size_array); // вызов функции сортировки пузырьком

	for (int counter = 0; counter < size_array; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; // печать отсортированного массива
	}
	cout << endl;
	system("pause");
	system("cls");

	// Program 2 Meeting 18
	cout << "Program 2" << endl << endl;

	system("pause");
	return 0;
}
void bubbleSort(int* arrayPtr, int length_array) // сортировка пузырьком
{
	int temp = 0; // временная переменная для хранения элемента массива
	bool exit = false; // булевая переменная для выхода из цикла, если массив отсортирован

	while (!exit) // пока массив не отсортирован
	{
		exit = true;
		for (int int_counter = 0; int_counter < (length_array - 1); int_counter++) // внутренний цикл
		  //сортировка пузырьком по возрастанию - знак >
		  //сортировка пузырьком по убыванию - знак <
			if (arrayPtr[int_counter] > arrayPtr[int_counter + 1]) // сравниваем два соседних элемента
			{
				// выполняем перестановку элементов массива
				temp = arrayPtr[int_counter];
				arrayPtr[int_counter] = arrayPtr[int_counter + 1];
				arrayPtr[int_counter + 1] = temp;
				exit = false; // на очередной итерации была произведена перестановка элементов
			}
	}
}