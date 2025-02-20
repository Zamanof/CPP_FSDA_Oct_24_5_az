#include<iostream>
#include<iomanip>

using namespace std;

void fillMdArray(int**, int, int);

void showMdArray(int**, int, int);

int main() {
	srand(time(NULL));
	// Multi Dimnsional Dynamic arrays

	/*int** mdArr = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		mdArr[i] = new int[3];
	}
	fillMdArray(mdArr, 3, 3);
	showMdArray(mdArr, 3, 3);

	for (int i = 0; i < 3; i++)
	{
		delete[] mdArr[i];
	}
	delete[] mdArr;*/


	// 3 dimension dynamic array
	int*** arr3D = new int** [3];
	for (int i = 0; i < 3; i++)
	{
		arr3D[i] = new int*[3];
		for (int j = 0; j < 3; j++)
		{
			arr3D[i][j] = new int[3];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			delete[] arr3D[i][j];
		}
		delete[] arr3D[i];
	}
	delete[] arr3D;



}
void fillMdArray(int** arr, int rows, int cols) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}

void showMdArray(int** arr, int rows, int cols) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << left << setw(3) << arr[i][j];
		}
		cout << '\n';
	}
}