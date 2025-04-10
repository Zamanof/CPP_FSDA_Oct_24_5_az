#include "DynamicArray.h"

#include "DynamicArray.h"
// Default constructor
DynamicArray::DynamicArray() : DynamicArray(10) {
	cout << "DynamicArray()" << endl;
}

// Constructor with parameteres
DynamicArray::DynamicArray(int size)
	:size{ size }, arr{ new int[size] }
{

	cout << "DynamicArray(int size)" << endl;
}

// Copy constructor
DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{ new int[other.size] }, size{ other.size }
{
	cout << "Copy constructor" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

// copy assign operator
DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
	cout << "Copy assign operator" << endl;
	if (&other != this) {
		if (size != other.size) {
			delete[] arr;
			size = other.size;
			arr = new int[size];
		}
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
	}
	return *this;
}

// move constructor
DynamicArray::DynamicArray(DynamicArray&& other)
	:arr{other.arr}, size{other.size}
{
	other.arr = nullptr;
	other.size = 0;
	cout << "Move constructor" << endl;
}

// move assign operator
DynamicArray& DynamicArray::operator=(DynamicArray&& other){
	if (this != &other) {
		delete[] arr;
		arr = other.arr;
		size = other.size;
		other.arr = nullptr;
		other.size = 0;
	}
	cout<< "Move asiign operator" << endl;
	return *this;
}

void DynamicArray::randomize() {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}
void DynamicArray::show() const {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

DynamicArray::~DynamicArray() {
	cout << "~DynamicArray()" << endl;
	delete[] arr;
}


// Novbeti ders uchun dinamik data strukturlar haqqinda oxuyun 
// Dynamic data structure (Linked List, Double Linked List, Stack, Queue, Hash table)