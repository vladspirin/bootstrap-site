#include "pch.h"
#include "Header.h"

bool IsMagical(int** a, int n) {
	int magicsum = 0; //����� ��� ���������
	for (int i = 0; i < n; i++)
		magicsum += a[i][0];
	// ����� �����
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++)
			sum += a[i][j];
		if (sum != magicsum) return false;
	}
	// ����� ��������
	for (int j = 0; j < n; j++) {
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += a[i][j];
		if (sum != magicsum) return false;
	}
	// ����� ������� ���������
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i][i];
	if (sum != magicsum) return false;
	// ����� �������� ���������
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i][n - i - 1];
	if (sum != magicsum) return false;
	return true;
};