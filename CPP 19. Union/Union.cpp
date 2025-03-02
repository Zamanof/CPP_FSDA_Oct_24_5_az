#include<iostream>

using namespace std;

union {
	int age;
	bool check;
	double temperature;
} value;

int main() {
	int age = 45;
	double temperature = 36.6;
	bool check = true;

	cout << sizeof(age) + sizeof(temperature) + sizeof(check) << " byte" << endl;
	cout << sizeof(value) << " byte" << endl;

	cout << boolalpha << "check:       " << check << endl;
	cout << "age:         " << age << endl;
	cout << "temperature: " << temperature << endl;

	cout << endl;

	value.check = true;
	cout << boolalpha << "value.check:       " << value.check << endl;
	value.age = 45;
	cout << "value.age:         " << value.age << endl;
	value.temperature = 36.6;
	cout << "value.temperature: " << value.temperature << endl;
	cin >> value.age;
}