#include "DynamicArray.h"
DynamicArray::DynamicArray() : DynamicArray(10) {}

DynamicArray::DynamicArray(int size)
	:size{ size }, arr{ new int[size]}
{}

DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{new int[other.size]}, size{other.size}
{
	cout << "Copy constructor" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

// copy assign operator
const DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
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

// ostream overlaoding
ostream& operator<<(ostream& output, const DynamicArray& arr){
	for (size_t i = 0; i < arr.size; i++)
	{
		output << arr[i] << ' ';
	}
	output << '\n';
	return output;
}
// istream overlaoding
istream& operator>>(istream& input, DynamicArray& arr){

	for (size_t i = 0; i < arr.size; i++)
	{
		input >> arr[i];
	}
	return input;
}

// index operator overloading (set)
int& DynamicArray::operator[](int index) {
	if (index< 0 || index >= size)
	{
		throw exception("Index out of range");
	}
	return arr[index];
}

// index operator overloading (get)
int& DynamicArray::operator[](int index) const {
	if (index < 0 || index >= size)
	{
		throw exception("Index out of range");
	}
	return arr[index];
}


bool DynamicArray::operator==(const DynamicArray& other) const{
	if (size != other.size) return false;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] != other[i]) return false;
	}
	return true;
}
bool DynamicArray::operator!=(const DynamicArray& other) const{
	return !(*this == other);
}

void DynamicArray::randomize(){
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}
void DynamicArray::show() const{
	for (size_t i = 0; i < size; i++)
	{
		cout<< arr[i]<< ' ';
	}
	cout << '\n';
}

DynamicArray::~DynamicArray() {
	delete[] arr;
}