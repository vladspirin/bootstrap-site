// HW19072018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1 Meeting 13
	// Пользователь вводит число. Определить количество цифр в этом числе, посчитать их сумму и среднее арифметическое.
	// Определить количество нулей в этом числе. Общение с пользователем организовать через меню.
	cout << "Program 1" << endl << endl;
	int num, i = 0, sum = 0, check, digit = 0;
	cout << "Please enter number: "; cin >> num;
	cout << endl << "Please select the desired operation " << endl; 
	cout << "1. Determine the number of digits in this number" << endl; 
	cout << "2. Count the sum of the numbers of a given number" << endl; 
	cout << "3. Calculate arithmetic average" << endl; 
	cout << endl << "You choose: "; cin >> check;
	while (num / 1000) {
		if (check == 1) {
			for (; num > 0; i++) num /= 10;
			cout << "In your number " << i << " digits" << endl; digit = i;
		}
		else if (check == 2) {
			//for (; i < digit; i++) sum += ;
			//cout << "Sum of the numbers = " << sum << endl;
		}
		else if (check == 3) {

		}
		else cout << "Please select correct number of menu" << endl;
	}
	cout << endl;
	system("pause");
	system("cls");

	// Program 2 Meeting 13
	// Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки. 
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 1 Meeting 14
	// Написать программу, которая выводит на экран линию заданным символом, вертикальную или горизонтальную,
	// причем линия может выводиться быстро, нормально и медленно. Общение с пользователем организовать через меню.
	cout << "Program 1" << endl << endl;

	system("pause");
	system("cls");

	// Program 2 Meeting 14
	// Написать игру «Кубики». Пользователь и компьютер по очереди бросают 2 кубика.
	// Победитель – тот, у кого по результатам 3х бросков сумма больше. Предусмотреть красивый интерфейс игры.
	cout << "Program 1" << endl << endl;

	system("pause");
	return 0;
}
