// bbu181spirin2_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE hStrOut = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hStrOut, 4);
	cout << "\t\t\---------------\n";
	cout << "\t\t\| DESIGNERS   |\n";
	cout << "\t\t\---------------\n\n";
	SetConsoleTextAttribute(hStrOut, 2);
	cout << "\t\ URG REQ Auto Cad Designer\n\t\ and structural Engg for\n\t\ Windows and Facade Industry.\n";
	SetConsoleTextAttribute(hStrOut, 4);
	cout << "\t\ --------------------------\n\n";
	SetConsoleTextAttribute(hStrOut, 7);
	cout << "\t\ Contact on : 23723934 |\n\t\ info@hatimglazing.com\n\n";
	cin.get();
	return 0;
}