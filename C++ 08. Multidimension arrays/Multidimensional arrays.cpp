#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	srand(time(NULL));
	// Multidimensional static arrays
#pragma region multidimensional array
/*const int rows{ 3 }, cols{ 3 };*/
	/*int mdArr[rows][cols]{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};*/

	/*int mdArr[rows][cols]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/
	/*cout << mdArr[1][2] << endl;*/

	/*for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << mdArr[i][j] << ' ';
		}
		cout << '\n';
	}*/

	/*int arr[rows][cols]{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	cout << arr[1][1] << endl;

	cout << arr[2][-2] << endl;
	cout << arr[0][4] << endl;
	arr[0][4] = 69;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}*/

	/*const int r{ 3 }, c{ 4 };
	int arr2[r][c]{
		{25, 10, 13, 11},
		{8, 65, 12, 17},
		{3, 2, 1, 0},
	};
	int i{}, j{};
	cout << "Enter row index:" << endl;
	cin >> i;
	cout << "Enter column index:" << endl;
	cin >> j;

	cout << arr2[i][j] << endl;
	cout << arr2[0][c * i + j] << endl;*/


	/*int arr3[][2]{ 1, 6, 78, 3, 54, 4, 1, 6, 78, 5 };*/

#pragma endregion

#pragma region multidimension arrays fill and show (iomanip)
	//const int rows{ 5 }, cols{ 6 };
	//int mdArr[rows][cols]{};
	///*cout << sizeof(mdArr) << endl;*/
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		mdArr[i][j] = rand() % 1001;
	//	}
	//}

	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		cout << setw(5) << left << mdArr[i][j];
	//	}
	//	cout << endl;
	//}

	//cout << endl;

	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		/*cout << setw(5) << left<< setfill('_') << mdArr[i][j];*/
	//		cout << setw(5) << left << hex << mdArr[i][j];
	//	}
	//	cout << endl;
	//}

#pragma endregion


	return 0;
}
