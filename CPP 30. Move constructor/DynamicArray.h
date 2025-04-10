#pragma once
#include<iostream>

using namespace std;

class DynamicArray
{
private:
	int* arr;
	int size;
public:
	// deafult constructor
	DynamicArray();

	// constructor with parameters
	DynamicArray(int);

	// copy constructor
	DynamicArray(const DynamicArray&);

	// copy assign operator
	DynamicArray& operator=(const DynamicArray&);

	// move constructor
	DynamicArray(DynamicArray&&);

	// move assign operator
	DynamicArray& operator=(DynamicArray&&);

	void show() const;
	void randomize();

	~DynamicArray();
};

