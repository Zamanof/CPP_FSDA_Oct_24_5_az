#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<conio.h>
#include"enums.h"

using namespace std;

HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

void drawAzerbaijaniFlag(COORD& coord);

int main() {

#pragma region color system("color bf")
	/*
	0 = Black       8 = Gray
	1 = Blue        9 = Light Blue
	2 = Green       A = Light Green
	3 = Aqua        B = Light Aqua
	4 = Red         C = Light Red
	5 = Purple      D = Light Purple
	6 = Yellow      E = Light Yellow
	7 = White       F = Bright White
	*/

	/*system("color f0");
	cout << "Hello" << endl;
	system("pause");
	system("cls");
	system("color 3f");
	cout << "Hello" << endl;*/

#pragma endregion

#pragma region color Windows.h

	/*SetConsoleTextAttribute(hconsole, 6);
	cout << "Hello" << endl;
	SetConsoleTextAttribute(hconsole, 7);
	cout << "Hello" << endl;*/

	/*char text[] = "Hello";
	for (size_t i = 0; i < strlen(text); i++)
	{
		SetConsoleTextAttribute(hconsole, i + 1);
		cout << text[i];
	}
	SetConsoleTextAttribute(hconsole, 7);
	cout << endl;*/

	/*for (size_t i = 0; i < 256; i++)
	{
		SetConsoleTextAttribute(hconsole, i);
		cout << setw(5) << i << "  ";
		SetConsoleTextAttribute(hconsole, 7);
		cout << ' ';
		if ((i + 1) % 16 == 0 && i != 0) cout << '\n';
	}
	SetConsoleTextAttribute(hconsole, 7);*/
	/*SetConsoleTextAttribute(hconsole, (PURPLE << 4) + BRIGHT_WHITE);
	cout << "Lorem ipsum dolor sit amet" << endl;
	SetConsoleTextAttribute(hconsole, (BLACK << 4) + WHITE);*/
#pragma endregion

#pragma region Console cursor position
	short x{}, y{};
	COORD position{ x, y };
	/*SetConsoleCursorPosition(hconsole, position);
	cout << "Hello" << endl;*/
	/*for (size_t i = 0; i < 150; i++)
	{
		system("cls");
		position.X = i;
		SetConsoleCursorPosition(hconsole, position);
		cout << "Hello" << endl;
		Sleep(1000);
	}*/


	/*for (size_t i = 0; i < 1000; i++)
	{
		drawAzerbaijaniFlag(position);
		position.X++;
		Sleep(1);
		system("cls");
		if (i % 195 == 0 && i != 0) {
			position.Y++;
			position.X = 0;
		}
	}*/
#pragma endregion

#pragma region cool menu
	const int menuCount{ 4 };
	const char* menuItems[menuCount]{
		"Sign In",
		"Sign Up",
		"Show All",
		"Exit"
	};

	int key{}, choice{};
	bool isMenu = true;
	while (isMenu)
	{
		system("cls");
		for (size_t i = 0; i < menuCount; i++)
		{
#pragma region var 1
			/*if (choice == i) {
							SetConsoleTextAttribute(hconsole, (BLACK << 4) + RED);
							cout << ">  " << menuItems[i] << endl;
						}
						else {
							SetConsoleTextAttribute(hconsole, (BLACK << 4) + WHITE);
							cout << "  " << menuItems[i] << endl;
						}*/
#pragma endregion



			if (choice == i) {
				SetConsoleTextAttribute(hconsole, (RED << 4) + WHITE);
				cout << setw(10) << menuItems[i] << "    " << endl;
			}
			else {
				SetConsoleTextAttribute(hconsole, (BLACK << 4) + WHITE);
				cout << setw(10) << menuItems[i] << "    " << endl;
			}
		}
		SetConsoleTextAttribute(hconsole, (BLACK << 4) + WHITE);
		key = _getch();
		if (key == 224) key = _getch();
		switch (key)
		{

		case UPARROW:
			choice--;
			if (choice < 0) choice = menuCount - 1;
			break;
		case DOWNARROW:
			choice++;
			if (choice > 3) choice = 0;
			break;
		case EXIT:
			if (choice == 3) isMenu = false;
			break;
		default:
			break;
		}
	}

#pragma endregion

}

void drawAzerbaijaniFlag(COORD& coord) {
	short tmp = coord.Y;
	SetConsoleCursorPosition(hconsole, coord);
	SetConsoleTextAttribute(hconsole, (AQUA << 4) + AQUA);
	cout << "               " << endl;
	coord.Y++;
	SetConsoleCursorPosition(hconsole, coord);
	SetConsoleTextAttribute(hconsole, (RED << 4) + RED);
	cout << "      ";
	SetConsoleTextAttribute(hconsole, (RED << 4) + WHITE);
	cout << "(*";
	SetConsoleTextAttribute(hconsole, (RED << 4) + RED);
	cout << "       " << endl;
	coord.Y++;
	SetConsoleCursorPosition(hconsole, coord);
	SetConsoleTextAttribute(hconsole, (GREEN << 4) + GREEN);
	cout << "               " << endl;
	SetConsoleTextAttribute(hconsole, (BLACK << 4) + WHITE);
	coord.Y = tmp;
}