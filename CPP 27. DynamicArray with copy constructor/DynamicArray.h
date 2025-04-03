#pragma once
#include<iostream>

using namespace std;

class DynamicArray
{
private:
	int* arr;
	int size;
public:
	// with parameters
	DynamicArray(int size)
		:arr{ new int[size] }, size{ size }
	{
		cout << "Constructor DynamicArray(int size)" << endl;
	}
	
	// parameterless
	DynamicArray()
		:DynamicArray(5)
	{
		cout << "Constructor DynamicArray()" << endl;
	}

	// Copy constructor
	DynamicArray(const DynamicArray&);

	int getElement(int);
	void setElement(int, int);
	void show();
	void randomize();

	~DynamicArray();
};


