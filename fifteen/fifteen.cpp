// fifteen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <windows.h>
using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void GotoXY(int X, int Y)
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}

void WriteDig(int X, int Y, int a)
{
	GotoXY(X, Y);
	cout << "  " << flush;
	GotoXY(X, Y);
	if (a)
		cout << a << flush;
}

void PrintTable()
{
	int i, w = 8;


	const unsigned char Border_Top_Left = 218;
	const unsigned char Border_Top_Right = 191;
	const unsigned char Border_Bottom_Left = 192;
	const unsigned char Border_Bottom = 193;
	const unsigned char Border_Bottom_Right = 217;
	const unsigned char Border_Center_Left = 195;
	const unsigned char Border_Center_Center = 197;
	const unsigned char Border_Center_Right = 180;
	const unsigned char Border_Horz = 196;
	const unsigned char Border_Vert = 179;
	const unsigned char Border_Center = 194;
	const unsigned char Border = 0;


	cout << Border_Top_Left;  //перший рядок комірок
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Top_Right << endl;



	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;



	cout << Border_Center_Left; //другий рядок комірок
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Right << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Center_Left; //третій рядок комірок
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Right << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Center_Left; //четвертий рядок комірок
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Center_Right << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert;
	for (i = 1; i <= w - 2; i++)
		cout << " ";
	cout << Border_Vert << endl;


	cout << Border_Bottom_Left; // нижня границя
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Bottom;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Bottom;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Bottom;
	for (i = 1; i <= w - 2; i++)
		cout << Border_Horz;
	cout << Border_Bottom_Right << endl;
}


int _tmain(int argc, _TCHAR* argv[])
{ 
	PrintTable();
	system("pause");

	return 0;

}

