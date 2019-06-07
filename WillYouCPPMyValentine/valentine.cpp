// a geeky valentine
// TODO: ASCII heart?
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
// colors
#define FG_BRIGHTRED 12
#define FG_BRIGHTBLUE 9
#define FG_BRIGHTMAGENTA 13

void setColorRed(HANDLE);
void setColorBlue(HANDLE);
void setColorPink(HANDLE);
void setColorWhite(HANDLE);
using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setColorWhite(hConsole);

	cout << "Roses are ";
	setColorRed(hConsole);
	cout << "#FF0000,\n";
	setColorWhite(hConsole);
	Sleep(1500);

	cout << "Violets are ";
	setColorBlue(hConsole);
	cout << "#0000FF,\n";
	setColorWhite(hConsole);
	Sleep(1500);

	cout << "The core of my CP\n";
	Sleep(1500);
	setColorPink(hConsole);
	cout << "Gigahertz "; Sleep(375); cout << "for "; Sleep(375); cout << "U!\n";
	setColorWhite(hConsole);

	cout << "\nPress any key to exit";
	_getch();
	return 0;
}

void setColorRed(HANDLE h) {
	SetConsoleTextAttribute(h, (FG_BRIGHTRED));
}

void setColorBlue(HANDLE h) {
	SetConsoleTextAttribute(h, (FG_BRIGHTBLUE));
}

void setColorPink(HANDLE h) { 
	SetConsoleTextAttribute(h, (FG_BRIGHTMAGENTA));
}

void setColorWhite(HANDLE h) {
	SetConsoleTextAttribute(h, (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE));
}