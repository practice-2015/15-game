// fifteen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <windows.h>
#include <conio.h>
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


int a[4][4] =
{
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 },
	{ 13, 14, 15, 0 }
};


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



void Table()
{
   for (int i = 0; i < 4; i++)
      {
          for (int j = 0; j < 4; j++)
	     {
		WriteDig(j * 7 + 3, i * 4 + 2, a[i][j]);
	      }
       }
}




int _tmain(int argc, _TCHAR* argv[])
{
	const int Esc = 27;
	const int Top1 = 72;
	const int Left1 = 75;
	const int Right1 = 77;
	const int Bottom1 = 80;

	int count = 0;
	int wi = 0, wj = 0;
	int i, j;
	int code = 0;

	PrintTable();
	// ��������� � �����'������� ����� ������, ��� ������ ���������� �������


	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == 0)
			{
				wi = i;
				wj = j;
				break;
			}
		}
	}

	//��� ���������� �������
	int x = wj * 7 + 3, y = wi * 4 + 2;
	count = 0;
	do
	{
		Table();
		WriteDig(x, y, 0);

		code = getch();

		if (code == 224)
		{
			code = getch();
		}
		switch (code)
		{
		case Top1:
			if (wi != 0)
			{
				a[wi][wj] = a[wi - 1][wj];
				a[wi - 1][wj] = 0;
				wi--;
				count++;
				WriteDig(x, y -= 4, 0);
			}
			break;

		case Bottom1:
			if (wi < 3)
			{
				a[wi][wj] = a[wi + 1][wj];
				a[wi + 1][wj] = 0;
				wi++;
				count++;
				WriteDig(x, y += 4, 0);
			}
			break;

		case Left1:
			if (wj != 0)
			{
				a[wi][wj] = a[wi][wj - 1];
				a[wi][wj - 1] = 0;
				wj--;
				count++;
				WriteDig(x -= 7, y, 0);
			}
			break;

		case Right1:
			if (wj < 3)
			{
				a[wi][wj] = a[wi][wj + 1];
				a[wi][wj + 1] = 0;
				wj++;
				count++;
				WriteDig(x += 7, y, 0);
			}
			break;
			system("cls");

		}

	} while (code != 27);

		PrintTable();
		system("pause");

		return 0;
	}
