#include<iostream>
#include<conio.h>

using namespace std;
enum sides {
	LEFTCHAR = 'a',
	LEFTARROW = 75,

	RIGHTCHAR = 'd',
	RIGHTARROW = 77,

	UPCHAR = 'w',
	UPARROW = 72,

	DOWNCHAR = 's',
	DOWNARROW = 80,
	
	EXIT = 13
};
void my_swap(int& left, int& right);

void showFields(int fields[][10], int rows, int cols);

void left(int fields[][10], int row, int& col);
void right(int fields[][10], int row, int& col);
void up(int fields[][10], int& row, int col);
void down(int fields[][10], int& row, int col);

int main() {
	int gameField[10][10]{};
	int row{ 5 }, col{ 5 };
	gameField[row][col] = 1;
	int key{};
	bool isGame = true;
	while (isGame)
	{
		system("cls");
		showFields(gameField, 10, 10);
		key = _getch();
		if (key == 224) {
			key = _getch();
		}
		switch (key)
		{
		case LEFTCHAR:
		case LEFTARROW:
			left(gameField, row, col);
			break;
		case RIGHTCHAR:
		case RIGHTARROW:
			right(gameField, row, col);
			break;
		case UPCHAR:
		case UPARROW:
			up(gameField, row, col);
			break;
		case DOWNCHAR:
		case DOWNARROW:
			down(gameField, row, col);
			break;
		case EXIT:
			isGame = false;
			break;
		default:
			break;
		}
	}

}

void showFields(int fields[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			/*if (fields[i][j] == 0) {
				cout << char(176) << char(176);
			}
			if (fields[i][j] == 1) {
				cout << char(219) << char(219);
			}*/
			cout << fields[i][j];
		}
		cout << '\n';
	}

}

void my_swap(int& left, int& right) {
	int tmp = left;
	left = right;
	right = tmp;
}

void left(int fields[][10], int row, int& col) {
	if (col != 0) {
		my_swap(fields[row][col], fields[row][col - 1]);
		col--;
	}

}
void right(int fields[][10], int row, int& col) {
	if (col != 9) {
		my_swap(fields[row][col], fields[row][col + 1]);
		col++;
	}

}
void up(int fields[][10], int& row, int col) {
	if (row != 0) {
		my_swap(fields[row][col], fields[row - 1][col]);
		row--;
	}

}
void down(int fields[][10], int& row, int col) {
	if (row != 9) {
		my_swap(fields[row][col], fields[row + 1][col]);
		row++;
	}
}