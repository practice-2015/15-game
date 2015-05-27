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


	const unsigned char Single_Top_Left = 218;
	const unsigned char Single_Top_Right = 191;
	const unsigned char Single_Bottom_Left = 192;
	const unsigned char Single_Bottom = 193;
	const unsigned char Single_Bottom_Right = 217;
	const unsigned char Single_Center_Left = 195;
	const unsigned char Single_Center_Center = 197;
	const unsigned char Single_Center_Right = 180;
	const unsigned char Single_Horz = 196;
	const unsigned char Single_Vert = 179;
	const unsigned char Single_Center = 194;
	const unsigned char Single = 0;
	
	cout << Single_Top_Left;  
	for (i = 1; i <= w - 2; i++)
		cout << Single_Horz;
	cout << Single_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Single_Horz;
	cout << Single_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Single_Horz;
	cout << Single_Center;
	for (i = 1; i <= w - 2; i++)
		cout << Single_Horz;
	cout << Single_Top_Right << endl;
}



int _tmain(int argc, _TCHAR* argv[])
{ 
	

	

	PrintTable();
	system("pause");

	return 0;

}

