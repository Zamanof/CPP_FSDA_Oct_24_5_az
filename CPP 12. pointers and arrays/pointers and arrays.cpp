#include<iostream>

using namespace std;

void FillArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

int main() {
	srand(time(NULL));
	// pointers and arrays
	/*int arr[5]{};*/
	// array-in adi(name) onun 0-ci elementine pointerdir
	// yeni 0-ci elementin unvanini saxlayir
	/*FillArray(arr, 5);
	ShowArray(arr, 5);*/
	/*cout << "arr = " << arr << endl;
	cout << "&arr[0] = " << &arr[0] << endl;
	cout << "*arr = " << *arr << endl;*/

	/*for (int i = 0; i < 5; i++)
	{
		cout << "&arr[" << i << "] = " << &arr[i] << endl;
	}*/

	// pointer vasitesi ile iki olchulu array-lerin 
	// eslinde yaddashda bir olchulu array kimi yerleshmesinin subutu

	/*bool boolArr[3][3]{};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "&boolArr[" << i << "][" << j << "] = " << &boolArr[i][j] << endl;
		}
	}*/

}
