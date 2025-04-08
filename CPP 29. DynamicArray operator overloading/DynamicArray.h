#pragma once
#include<iostream>

using namespace std;

class DynamicArray
{
private:
	int size;
	int* arr;
	friend ostream& operator<<(ostream&, const DynamicArray&);
	friend istream& operator>>(istream&, DynamicArray&);
public:
	DynamicArray();
	explicit DynamicArray(int);
	DynamicArray(const DynamicArray&);

	// copy assign operator
	const DynamicArray& operator=(const DynamicArray&);

	int& operator[](int);
	int& operator[](int) const;

	bool operator==(const DynamicArray&) const;
	bool operator!=(const DynamicArray&) const;

	void randomize();
	void show() const;

	~DynamicArray();
};

