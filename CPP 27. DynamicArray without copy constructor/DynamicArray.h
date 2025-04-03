#pragma once
#include<iostream>

using namespace std;

class DynamicArray
{
private:
	int* arr;
	int size;
public:
	DynamicArray(int size)
		:arr{new int[size]}, size{size}
	{
		cout << "Constructor DynamicArray(int size)" << endl;
	}
	DynamicArray()
		:DynamicArray(5)
	{
		cout << "Constructor DynamicArray()" << endl;
	}

	int getElement(int);
	void setElement(int, int);
	void show();
	void randomize();

	~DynamicArray();
};

