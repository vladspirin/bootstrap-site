#include "pch.h"
#include "Header.h"

bool IsMagical(int** a, int n) {
	int magicsum = 0; //сумма для сравнения
	for (int i = 0; i < n; i++)
		magicsum += a[i][0];
	// сумма строк
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++)
			sum += a[i][j];
		if (sum != magicsum) return false;
	}
	// сумма столбцов
	for (int j = 0; j < n; j++) {
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += a[i][j];
		if (sum != magicsum) return false;
	}
	// сумма главной диагонали
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i][i];
	if (sum != magicsum) return false;
	// сумма побочной диагонали
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i][n - i - 1];
	if (sum != magicsum) return false;
	return true;
};