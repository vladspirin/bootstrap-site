#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

const char SYMBOL = 50;

void searching(int amount, char arr[]) {
	int digit; char symbol, letter;
	for (int i = 0; i < amount; i++) {
		//if (arr[i] == )
	}
	for (int i = 0; i < amount; i++) {

	}
};

int main()
{
	// Написати програму для рішення поставлених задач.
	// Введення/виведення та обробку даних реалізувати за допомогою функцій.

	// Program 1
	// Дано рядок символів. Замінити у ній усі пробели на табуляції.
	cout << "Program 1" << endl << endl;
	char str[SYMBOL];
	cout << "Please enter your string: " << endl;
	cin.getline(str, SYMBOL);
	int k = strlen(str);
	cout << "Result: " << endl;
	for (int i = 0; i < k; i++) {
		if (str[i] == ' ') str[i] = '\t';
		cout << str[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	
	// Program 2
	// Дано рядок символів. Визначити кількість букв, цифр та інших символів у рядку.
	/*
	cout << "Program 2" << endl << endl;
	char str[SYMBOL];
	cout << "Please enter string (use words, numbers & symbols): " << endl;
	cin.getline(str, SYMBOL);
	int k2 = strlen(str);
	//searching(k2, ......);
	system("pause");
	system("cls");
	/*
	// Program 3
	// Дано рядок символів (речення). Підрахувати кількість слів у реченні.
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");
	
	// Program 4
	// Дано рядок символів. Необхідно перевірити чи є цей рядок паліндромом.
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	// Дано рядок символів. Необхідно вивести рядок навпаки.
	cout << "Program 5" << endl << endl;
	const char N = 10;
	char str[N];
	cout << "Please enter your string: " << endl;
	cin.getline(str, N);
	int k = strlen(str);
	cout << "Reverse string: " << endl;
	for (int i = k - 1; i >= 0; i--) cout << str[i];
	system("pause");
	system("cls");
	*/
	// Program 6
	// Дано рядок. Визначити скільки разів зустрічається у рядку введений цей символ.
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	// Дано рядок символів. Необхідно видалити всі літери «а» та «о» із рядка
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	// Дано рядок символів. Необхідно визначити довжину кожного слова та замінити усі літери «о» на «а».
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	// Дано рядок символів. Необхідно визначити довжину кожного слова та вивести саме довге слово.
	cout << "Program 9" << endl << endl;

	system("pause");
	system("cls");

	// Program 10
	// Дано рядок символів. Необхідно відсортувати слова розділені пробілами за англійським алфавітом.
	cout << "Program 10" << endl << endl;

	system("pause");
	*/
};
