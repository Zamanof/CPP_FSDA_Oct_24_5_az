#include<iostream>

using namespace std;

int& foo(int* arr) {
	return arr[0];
}

void bar(int&& rValueRef)

int main() {
	int numb = 78;

	numb = numb * 3;
	int arr[]{ 1, 8, 98 };
	for (size_t i = 0; i < 3; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	foo(arr) = 58;

	for (size_t i = 0; i < 3; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
	/*
	l-value - menimsetme operatorundan solda dayana 
			 bilen hisse: deyishenler, obyektler, funksiyalar ve s. 
			 hansilarin ki, oz daimi unvani var
	*/

	/*
	r-value - menimsetme operatorundan saqda dayana
			 bilen hisse: literallar,ifadeler ve s.
			 hansilarin ki, oz daimi unvani yoxdur, muveqqetidir 
	*/

	// reference to r-value -> &&

	int&& rValueRef = numb + 56;
}