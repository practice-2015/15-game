// fifteen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <windows.h>
#include <conio.h>
#include <time.h>

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


	cout << Border_Top_Left;  
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



	cout << Border_Center_Left; 
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


	cout << Border_Center_Left; 
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


	cout << Border_Center_Left; 
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

	
	cout << Border_Bottom_Left; 
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



int a[4][4] =
{
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 },
	{ 13, 14, 15, 0 }
};



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




bool IsCorrect()
{
	bool Yes = false;
	int count = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (count == 15)
				break;

			if (a[i][j] != count)
				Yes = true;
			count++;
		}
	}
	return Yes;
}

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	YesrkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


void Tittle()
{
	cout << ("\n\n\n\t\t\t************ 15  ************\n\n"
		"\t\t\t\t  Version: I-24 \n"
		"\t\t\t\t  Fizmat forever\n"
		"\t\t\t\t  Will Be A Winner\n\n"
		"\t\t------------------------------------------------\n");
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
	
	SetColor(LightRed, Black);
	Tittle();
	cout << ("\t\t\t\t  Press Enter:\b\b\b\b\b\b");
	system("cls");
	


//підключаємо бібліотеку <time.h>
// шукаємо 0, щоб почати

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
	
 
	srand((unsigned)time(NULL));

	int code = 0;
	const int Top = 1;
	const int Left = 2;
	const int Right = 3;
	const int Bottom = 4;

	do
	{
	    code = rand() % 4 + 1;
		switch (code)
		{
	   	   case Top:
			if (wi != 0)
			{
				a[wi][wj] = a[wi - 1][wj];
				a[wi - 1][wj] = 0;
				wi--;
				count++;
			}
			break;

		case Bottom:
			if (wi < 3)
			{
				a[wi][wj] = a[wi + 1][wj];
				a[wi + 1][wj] = 0;
				wi++;
				count++;
			}
			break;

		case Left:
			if (wj != 0)
			{
				a[wi][wj] = a[wi][wj - 1];
				a[wi][wj - 1] = 0;
				wj--;
				count++;
			}
			break;

		case Right:
			if (wj < 3)
			{
				a[wi][wj] = a[wi][wj + 1];
				a[wi][wj + 1] = 0;
				wj++;
				count++;
			}
			break;
			system("cls");

		}
	} 
	while (count < 2005);



	SetColor(LightBlue, Black);
	PrintTable();
	// çíàõîäèìî ³ çàïàì'ÿòîâóºìî ïóñòó êîì³ðîê, ùîá ïî÷àòè ïåðåì³ùåííÿ êóðñîðà


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

		if (!IsCorrect())
		{
			system("cls");

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = 0;
				}

			}
		}
	} while (code != 27);
	
		PrintTable();
		system("pause");

		return 0;
	}
