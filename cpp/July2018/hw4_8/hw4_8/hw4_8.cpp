// hw4_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	int day1, month1, year1, day2, month2, year2, x, y = 0;
	int leap, k;
	int m1 = 31, m2 = 28, m3 = 31, m4 = 30, m5 = 31, m6 = 30, m7 = 31, m8 = 31, m9 = 30, m10 = 31, m11 = 30, m12 = 31;
	cout << "Please enter first date (d/m/yyyy): \n";
	// вводим первую дату д.м.гггг
	cin >> day1 >> month1 >> year1;
	cout << "Please enter second date (d/m/yyyy): \n";
	// вводим вторую дату д.м.гггг
	cin >> day2 >> month2 >> year2;
	//высчитываем сколько было высокосных лет в заданном интервале
	leap = year1;
	k = 0;
	while (leap <= year2)
	{
		if (leap % 4 == 0 && leap % 100 != 0 || leap % 400 == 0) { k = k + 1; }
		leap++;
	}
	//высчитываем сколько прошло дней в году до начальной даты
	if (month1 == 1) { x = day1; }
	else if (month1 == 2) { x = m1 + day1; }
	else if (month1 == 3) { x = m1 + m2 + day1; }
	else if (month1 == 4) { x = m1 + m2 + m3 + day1; }
	else if (month1 == 5) { x = m1 + m2 + m3 + m4 + day1; }
	else if (month1 == 6) { x = m1 + m2 + m3 + m4 + m5 + day1; }
	else if (month1 == 7) { x = m1 + m2 + m3 + m4 + m5 + m6 + day1; }
	else if (month1 == 8) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + day1; }
	else if (month1 == 9) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + day1; }
	else if (month1 == 10) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + day1; }
	else if (month1 == 11) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + day1; }
	else if (month1 == 12) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + day1; }
	//высчитываем сколько прошло дней в году до конечной даты
	if (month2 == 1) { y = day2; }
	else if (month2 == 2) { y = m1 + day2; }
	else if (month2 == 3) { y = m1 + m2 + day2; }
	else if (month2 == 4) { y = m1 + m2 + m3 + day2; }
	else if (month2 == 5) { y = m1 + m2 + m3 + m4 + day2; }
	else if (month2 == 6) { y = m1 + m2 + m3 + m4 + m5 + day2; }
	else if (month2 == 7) { y = m1 + m2 + m3 + m4 + m5 + m6 + day2; }
	else if (month2 == 8) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + day2; }
	else if (month2 == 9) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + day2; }
	else if (month2 == 10) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + day2; }
	else if (month2 == 11) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + day2; }
	else if (month2 == 12) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + day2; }

	if ((year1 % 4 == 0 && leap % 100 != 0 || leap % 400 == 0) && month1>2) { k = k - 1; } //если начальная дата высокосный год больше 29 февраля то отнимаем 1 от кол-во высокосных лет
	if ((year2 % 4 == 0 && leap % 100 != 0 || leap % 400 == 0) && day2 <= 29 && month2 < 3) { k = k - 1; } //если конечная дата до 29 февраля то отнимаем 1 от высокосных лет

	if (year1 == year2)
	{
		cout << "Number of days between dates: " << (y - x) + k << "\n" << endl;
	}
	else
		cout << "Number of days between dates: " << (year2 - year1) * 365 + ((y - x) + k) << "\n" << endl;
	// Первая попытка была сделать через switch не вышло, пришел к стандартному пока для меня варианту. Попозже попытаюсь эту задачу решить иным способом
	system("pause");
	system("cls");
	

	// Program 2
	double a, b, c;
	// a - уровень продаж, а затем ЗП первого менеджера
	cin >> a;
	if (a < 500) a = 0.03 * a + 200;
	else if (a > 500 && a < 1000) a = 0.05 * a + 200;
	else if (a > 1000) a = 0.08 * a + 200;
	// b - второго менеджера
	cin >> b;
	if (b < 500) b = 0.03 * b + 200;
	else if (b > 500 && b < 1000) b = 0.05 * b + 200;
	else if (b > 1000) b = 0.08 * b + 200;
	// c - третьего менеджера
	cin >> c;
	if (c < 500) c = 0.03 * c + 200;
	else if (c > 500 && c < 1000) c = 0.05 * c + 200;
	else if (c > 1000) c = 0.08 * c + 200;

	if (a > b && a > c) a += 200; 
	else if (b > c) b += 200;
	else c += 200;

	cout << "First manager's salary: " << a << "\n";
	cout << "Second manager's salary: " << b << "\n";
	cout << "Third manager's salary: " << c << "\n";
	system("pause");
    return 0;
}

