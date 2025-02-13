#include<iostream>

using namespace std;

int main() {
	// pointer arithmetics

	// pointer-ler arasinda chixma emeliyyati
	// hemchinin pointerin uzerine int deyer
	// gelmek ve chixmaq mumkundur
	// Elece de ++ ve -- emeliyyatlari da yerine
	// yetirmek mumkundur

	/*int num1{ 64 }, num2{ 15 };
	int* num1Ptr{ &num1 }, * num2Ptr{ &num2 };*/

	// cout << num1Ptr + num2Ptr << endl; // mumkun deyil
	// cout << num1Ptr * num2Ptr << endl; // mumkun deyil
	// cout << num1Ptr / num2Ptr << endl; // mumkun deyil
	// cout << num1Ptr - num2Ptr << endl; // mumkundur - iki unvan arasindaki mesafeni gosterir
	// cout << num1Ptr + 1 << endl; // mumkundur - novbeti unvani aliriq
	// cout << num1Ptr << endl;
	// system("pause");
	// cout << num1Ptr -1 << endl; // mumkundur - bir evvelki unvani aliriq

	/*cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << *(num2Ptr - 8) << endl;
	*(num2Ptr - 8) = 12;
	*(num1Ptr + 8) = 98;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;*/

	//int arr[2][2]{ 
	//	5, 9, 
	//	78, 956 };
	///*cout << arr[0][2] << endl;
	//cout << arr[1][-1] << endl;*/
	//cout << *(&arr[1][0] - 1) << endl;
	//cout << *(&arr[0][0] + 2) << endl;
	/*const int length = 5;
	int arr[length]{ 5, 9, 78, 956, 8 };
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << ' ';
	}
	cout << '\n';*/

	// pointer comparison
	// iki pointer arasinda butun muqayise operatorlarini istifade etmek olar
	// >, <, >=, <=, ==, !=

	/*int arr1[3]{ 15, 78, 25 };

	for (int* i = arr1; i <= &arr1[2]; i++)
	{
		cout << *i << endl;
	}*/

}