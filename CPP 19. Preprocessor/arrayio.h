#pragma once
#include<iostream>

using namespace std;

void fillArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 101;
	}
}

void showArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
