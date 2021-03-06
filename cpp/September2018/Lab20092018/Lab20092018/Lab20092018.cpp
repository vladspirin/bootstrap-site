// Lab20092018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void ptrSwap(int *&ptr1, int *&ptr2) {
	int *tmp = ptr2;
	ptr2 = ptr1;
	ptr1 = tmp;
};

double maX(double *begin, double *end) {
	double *result = begin++;
	while (begin != end) {
		if (*result < *begin) { result = begin; }
		++begin;
	}
	return *result;
};
double mIn(double *begin, double *end) {
	double *result = begin++;
	while (begin != end) {
		if (*result > *begin) { result = begin; }
		++begin;
	}
	return *result;
};


int main()
{
	srand(time(0));
	// Program 1
	// Використовуючи вказівники та оператор розйменування, визначить більше з двох чисел.
	cout << "Program 1" << endl << endl;
	int x1, y1; int *a1 = &x1, *b1 = &y1;
	cout << "Please enter first variable: "; cin >> x1;
	cout << "Please enter second variable: "; cin >> y1;
	if (*a1 < *b1) cout << "Result: x < y" << endl;
	else cout << "Result: x > y" << endl;
	system("pause");
	system("cls");
	
	// Program 2
	// Використовуючи вказівники та оператор розйменування, визначить знак числа, введеного з клавіатури.
	cout << "Program 2" << endl << endl;
	int Vr1; int *ptrVar2;
	ptrVar2 = &Vr1;
	cout << "Please enter variable: "; cin >> Vr1;
	if (*ptrVar2 < 0) cout << "Is negative variable!" << endl;
	if (*ptrVar2 > 0) cout << "Is posivive variable!" << endl;
	if (*ptrVar2 == 0) cout << "Your variable = 0" << endl;
	system("pause");
	system("cls"); 
	
	// Program 3
	// Використовуючи вказівники та оператор розйменування, обміняйте місцями значення двох змінних.
	cout << "Program 3" << endl << endl;
	int var1, var2; int *ptrvar1, *ptrvar2;
	ptrvar1 = &var1, ptrvar2 = &var2;
	cout << "Please enter first variable: "; cin >> var1;
	cout << "Please enter second variable: "; cin >> var2;
	cout << "First variable: " << *ptrvar1 << " Second variable: " << *ptrvar2 << endl;
	cout << "After reverse: " << endl;
	ptrSwap(ptrvar1, ptrvar2);
	cout << "First variable: " << *ptrvar1 << " Second variable: " << *ptrvar2 << endl;
	system("pause");
	system("cls");
	
	// Program 4
	// Написати примітивний калькулятор, користуючись тільки вказівниками.
	cout << "Program 4" << endl << endl;
	double a4, b4; double *ptrVar1_4, *ptrVar2_4; unsigned op; unsigned *operation;
	operation = &op;
	ptrVar1_4 = &a4, ptrVar2_4 = &b4;
	cout << "Please enter first variable: "; cin >> a4;
	cout << "Please enter second variable: "; cin >> b4;
	unsigned plus = 1, minus = 2, divide = 3, mult = 4;
	unsigned *ptrVar3_4, *ptrVar4_4, *ptrVar5_4, *ptrVar6_4;
	ptrVar3_4 = &plus, ptrVar4_4 = &minus, ptrVar5_4 = &divide, ptrVar6_4 = &mult;
	cout << "What kind of operation with variables do you want to perform?" << endl;
	cout << "1: " << "+" << endl;
	cout << "2: " << "-" << endl;
	cout << "3: " << "/" << endl;
	cout << "4: " << "*" << endl;
	cout << endl;
	cin >> op;
	cout << endl;
	switch (*operation)
	{
	case 1: cout << "Result: " <<  *ptrVar1_4 + *ptrVar2_4; break;
	case 2: cout << "Result: " << *ptrVar1_4 - *ptrVar2_4; break;
	case 3: cout << "Result: " << *ptrVar1_4 / *ptrVar2_4; break;
	case 4: cout << "Result: " << (*ptrVar1_4) * (*ptrVar2_4); break;
	default: cout << "Error! Next time, please choose number of operation."; break;
	} // задача была примитивный калькулятор, он примитивный и работает :)
	// Позже я подумал что можно было сделать существенно короче, через функцию...
	cout << endl;
	system("pause");
	system("cls");
	
	// Program 5
	// Використовуючи вказівник на масив цілих чисел, порахувати суму елементів масиву.
	// Використовувати у програмі арифметику вказівників для просуванню по масиву, а також оператор разйменування.
	cout << "Program 5" << endl << endl;
	int a[10] = { 1,7,3,5,2,4,6,7,9,3 }, s = 0;
	cout << "Source array: ";
	for (int i = 0; i < 10; i++) cout << setw(3) << *(a + i); cout << endl;
	for (int i = 0; i < 10; i++) s += *(a + i); cout << endl << "Sum = " << s << endl << endl;
	system("pause");
	system("cls");
	
	// Program 6
	// Описати і задати 2 масиви типу int і float розмірністю 7. Вивести на екран значення всіх елементів
	// обох масивів з використанням адресної арифметики.
	cout << "Program 6" << endl << endl;
	int arr1_6[7] = { 25, 34, 11, 58, 17, 2, 9 };
	float arr2_6[7] = { 12.3, 3.5, 45, 10.5, 23, 7.5, 7 };
	cout << "First 'int' array: ";
	for (int i = 0; i < 7; ++i) cout << *(arr1_6 + i) << ' ';
	cout << endl << "Second 'float' array: ";
	for (int j = 0; j < 7; ++j) cout << *(arr2_6 + j) << ' ';
	cout << endl << endl;
	system("pause");
	system("cls");
	
	// Program 7
	// Написати програму, яка обчислює суму мінімального і максимального елементів масиву значень
	// з плаваючою крапкою подвійної точності. Здійснити пошук мінімального і максимального елементів у двох окремих функціях.
	cout << "Program 7" << endl << endl;
	cout << "Source array: ";
	double arr1_7[10] = { 10.46, 7.64, 12.82, 15.86, 7.62, 11.78, 18.46, 1.22, 15.6, 6.32 };
	double *p1_7 = arr1_7;
	for (int i = 0; i < 10; i++) {
		cout << *(p1_7 + i) << " ";
	} cout << endl;
	cout << "Max element: " << maX(arr1_7, arr1_7 + 10) << endl << "Min element: " << mIn(arr1_7, arr1_7 + 10) << endl;
	system("pause");
	system("cls"); 
	
	// Program 8
	// Написати програму, яка обчислює суму додатних елементів масиву дійсних чисел.
	cout << "Program 8" << endl << endl;
	int arr1_8[20]; int sum8 = 0;
	cout << "Source array: " << endl;
	for (int i = 0; i < 20; ++i) {
		*(arr1_8 + i) = rand() % 50;
		if (*(arr1_8 + i) == 0) *(arr1_8 + i) = rand() % 50;
		cout << *(arr1_8 + i) << " ";
	} cout << endl;
	for (int i = 0; i < 20; ++i) {
		if (*(arr1_8 + i) > 0) sum8 += *(arr1_8 + i);
	}
	cout << "Sum = " << sum8 << endl << endl;
	system("pause");
	system("cls");
	
	// Program 9
	// Написати програму, яка визначає масив дійсних чисел і обчислює суму елементів з непарними індексами.
	cout << "Program 9" << endl << endl;
	int arr1_9[10]; int sum9 = 0; int OddIndx;
	int *p1_9 = arr1_9;
	cout << "Source array: ";
	for (int i = 0; i < 10; ++i) {
		*(p1_9 + i) = rand() % 30; 
		if (*(p1_9 + i) == 0) *(p1_9 + i) = rand() % 30; 
		cout << *(p1_9 + i) << " ";
	} cout << endl;
	for (int i = 0; i < 10; i++) {
		if(p1_9 - i) OddIndx = i;
		if ((OddIndx % 2) == 1) sum9 += *(p1_9 + i);
	} cout << endl;
	cout << "The sum of odd index values = " << sum9 << endl << endl;
	system("pause");
	return 0;
};