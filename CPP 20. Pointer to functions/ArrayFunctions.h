#pragma once
#include<iostream>
using namespace std;

void FillArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 100 - 50;
	}
}
void ShowArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void showFilteredValue(int* arr, int length, bool(*pred)(int)) {
	for (size_t i = 0; i < length; i++)
	{
		if (pred(arr[i])) cout << arr[i] << ' ';
	}
	cout << endl;
}
