// bbu181spirin2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE hStrOut = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hStrOut, 6);
	cout << "Every hunter wants...\n";
	SetConsoleTextAttribute(hStrOut, 7);
	cout << "Every hunter wants...\n";
	SetConsoleTextAttribute(hStrOut, 5);
	cout << "Every hunter wants...\n";
	SetConsoleTextAttribute(hStrOut, 4);
	cout << "Every hunter wants...\n";
	SetConsoleTextAttribute(hStrOut, 2);
	cout << "Every hunter wants...\n\n\n";
	SetConsoleTextAttribute(hStrOut, 4);
	cout << "I searched all over the Internet, this poem is like a ghost.\n";

	cin.get();
    return 0;
}

