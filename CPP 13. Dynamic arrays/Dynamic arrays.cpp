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

int* allocate(int length) {
	return new int[length];
}

int* appEnd(int* arr, int& length, int element) {
	int* tmpArr = allocate(length + 1);
	for (int i = 0; i < length; i++)
	{
		*(tmpArr + i) = *(arr + i);
	}
	tmpArr[length] = element;
	delete[] arr;
	length++;
	return tmpArr;
}

int main() {
	srand(time(NULL));

	// Dynamic memory

	//int* number = new int(5); 
	//// new data_type(value) - new achar sozu
	//// dinamik yaddashda (Heap-de) yaddash sahesi ayirmaq uchundur
	//// delete - dinamik yaddashda ayrilan yeri silmek uchundur
	//cout << *number << endl;
	//number = new int(87);
	//while (true)
	//{
	//	delete number;
	//	number = new int(8);
	//}

	// dinamik massivlerS
	/*int* dynArray = new int[8];
	dynArray[0] = 12;
	cout << dynArray[0] << endl;
	delete[] dynArray;

	while (true)
	{
		dynArray = new int[100000];
		delete[] dynArray;
	}*/

	int length{};
	cin >> length;
	int* arr = allocate(length);

	FillArray(arr, length);
	ShowArray(arr, length);

	arr = appEnd(arr, length, 9);
	
	ShowArray(arr, length);
}