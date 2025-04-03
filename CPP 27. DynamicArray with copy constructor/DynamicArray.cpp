#include "DynamicArray.h"


void DynamicArray::show() {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
// deep copy (derinden kopyalama)
DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{new int[other.size]}, size{other.size}
{
	cout << "Copy Constructor DynamicArray(const DynamicArray& other)" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

void DynamicArray::randomize() {
	

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}

int DynamicArray::getElement(int index) {
	return arr[index];
}

void DynamicArray::setElement(int index, int value) {
	arr[index] = value;
}

DynamicArray::~DynamicArray()
{
	delete[] arr;
}

