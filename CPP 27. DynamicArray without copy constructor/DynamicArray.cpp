#include "DynamicArray.h"


void DynamicArray::show() {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void DynamicArray::randomize() {
	srand(time(NULL));

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
