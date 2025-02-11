#include<iostream>

using namespace std;

int number = 98;

void changeValue(int number) {
	number++;
}

void changeGlobalValue() {
	number++;
}

int main() {
	// scope zones
	// global
	// local
	cout << "Global number = " << number << endl;
	changeGlobalValue();
	cout << "Global number = " << number << endl;
	int number = 15;
	cout << "Local number = " << number << endl;
	cout << "Global ::number = " << ::number << endl;
	/*cout << "Before function call number = " << number << endl;
	changeValue(number);
	cout << "After function call number = " << number << endl;*/
	if (true)
	{
		int number = 9824;
		cout <<"In if scope number = " << number << endl;
	}
	cout << "Local number = " << number << endl;

	{
		int numb = 78;
	}
	/*numb++;*/

	return 0;
}