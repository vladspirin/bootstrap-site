#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

const int ROW = 3;
const int COL = 4;

void rectanglePaint(int, int);
int recursion(int);
void isHighestValue(int, int);
//void isArrayFunc(int []);

//double powFunc(int, int);
bool isSimpleNumber(int);

int main()
{
	//srand(time(0));
	// Program 1
	// Написати функцію, яка виводить на екран прямокутник висотою N та шириною K.
	cout << "Program 1" << endl << endl;
	int a , b;
	cout << "Please enter 2 side of rectangle: ";
	cin >> a >> b; 
	rectanglePaint(a, b);
	cout << "Please enter 2 side of rectangle: ";
	cin >> a >> b;
	rectanglePaint(a, b);
	system("pause");
	system("cls");

	// Program 2
	// Написати функцію, яка обчислює факторіал переданого їй числа.
	cout << "Program 2" << endl << endl;
	int n2;
	cout << "Please enter your variable: ";	cin >> n2;
	cout << recursion(n2) << endl;
	system("pause");
	system("cls");

	// Program 3
	// Написати функцію для знаходження найбільшого із двох чисел
	cout << "Program 3" << endl << endl;
	int a3, b3;
	cout << "Please enter first variable: "; cin >> a3;
	cout << "Please enter second variable: "; cin >> b3;
	isHighestValue(a3, b3);
	cout << endl << endl;
	system("pause");
	system("cls");
	
	// Program 4
	// У двомірному масиві цілих чисел підрахувати:
	// − суму усіх елементів масиву;
	// − середнє арифметичне усіх елементів масиву;
	// − мінімальний елемент;
	// − максимальний елемент
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");
	/*
	// Program 5
	// У двомірному масиві цілих чисел підрахувати суму елементів: у кожному рядку; у кожному стовпцю; одночасно по усіх рядках та усіх стовпцях.
	int arr[ROW][COL]; 
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++) {
			arr[i][j] = rand() % 100;
		}
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++) {
			cout << arr[i][j];
		}
	//isArrayFunc( arr[ROW][COL]);
	system("pause");
	system("cls");

	// Program 6
	// Оголошуються масив розмірністю nхm і масив розмірністю nхn. Перший масив заповнити
	// випадковими числами, у діапазоні від 0 до 50. Другий масив заповнити за таким принципом: перший
	// елемент другого масиву дорівнює сумі першого та другого елементу першого масиву, другий елемент
	// другого масиву дорівнює сумі третього та четвертого елемента першого масиву.
	system("pause");
	system("cls");

	// Program 7
	// Обчислити значення a в степени n
	system("pause");
	system("cls");
	*/
	// Program 8
	// Визначити чи є введене число n>1 простим (функція повертає значення true або false)
	int z8;
	cout << "Please enter your variable: ";
	cin >> z8;
	bool r = isSimpleNumber(z8);
	cout << "Result: " <<  r<< endl;
	system("pause");
	system("cls");
	
	return 0;
};
// Function 1, Program 1
void rectanglePaint(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "*";
		cout << endl;
	}
}
// Function 2, Program 2
int recursion(int n) {
	// Условие входа и когда остановится
	if (n == 1) { return 1; }
	// Шаг рекурсии
	return recursion(n - 1) * n;
}
// Function 3, Program 3
void isHighestValue(int a, int b) {
	a > b ? cout << "Result: " <<  a <<  " > " <<  b :
	cout << "Result: " << a << " < " << b;
}

// Function 4, Program 4
void isArrayFunc(int arr[ROW][COL]) {
	int sum = 0;

}
// Function 5, Program 5

// Function 6, Program 6

// Function 7, Program 7
//double powFunc(int a, int n) {
//	if (a )
//}
// Function 8, Program 8
bool isSimpleNumber(int n) {
	bool r;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) break;
		if (i >= n) r = 1;
		else r = 0;
		cout << "Result: "<< r << endl;
		return r;
	}
}