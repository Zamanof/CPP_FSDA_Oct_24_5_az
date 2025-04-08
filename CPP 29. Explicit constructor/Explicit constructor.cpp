#include<iostream>

using namespace std;

class Date {
public:
	int day;
	int month;
	int year;
	Date(int day, int month, int year)
		:day{ day }, month{ month }, year{ year }
	{
		cout << "Date(int day, int month, int year)" << endl;
	}

	// explicit constructor
	explicit Date(int year)
		:Date(1, 1, year)
	{
		cout << "Date(int day)" << endl;
	}

};

void show(Date date) {
	cout << date.day << '/' << date.month << '/' << date.year << endl;
}

class Array {
private:
	int size;
	int* arr;
public:
	// explicit constructor
	explicit Array(int size = 10)
		:size{size}, arr{new int[size]}
	{
		cout << "Array(int size = 10)" << endl;
	}
	~Array()
	{
		delete[] arr;
	}
	int getSize() const { return size; };
	int getValue(const int index) const { return arr[index]; }
	void setValue(const int index, const int value) { arr[index] = value; }
	void showValue(const int index)const { cout << getValue(index)<<' '; }
};

void showArray(const Array& arr) {
	for (size_t i = 0; i < arr.getSize(); i++)
	{
		arr.showValue(i);
	}
	cout << '\n';
}

int main() {
	srand(time(NULL));
	// Explicit constructor
	//Date date1{ 8, 4, 2025 };
	//show(date1);
	/*Date date2(2025);
	show(date2);*/

	/*show(2020);
	Date date3 = 2000;
	show(date3);*/

	/*int length{ 14 };
	Array arr(length);
	for (size_t i = 0; i < length; i++)
	{
		arr.setValue(i, rand() % 90 + 10);
	}
	showArray(arr);*/

	/*showArray(25);

	Array array2 = 5;
	for (size_t i = 0; i < array2.getSize(); i++)
	{
		array2.setValue(i, rand() % 90 + 10);
	}
	showArray(array2);*/

}