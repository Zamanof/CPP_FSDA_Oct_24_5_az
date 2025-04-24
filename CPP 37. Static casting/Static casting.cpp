#include<iostream>

using namespace std;

int main() {
	// Casts
#pragma region C style casting
	/*float price = (float)2.69;
	char symbol = 65;
	cout << price << endl;
	cout << symbol << endl;*/

	/*int a{ 25 };
	int b{ 3 };
	cout << a / (float)b;*/

#pragma endregion

	// static_cast<new_type>(expression) - polimorf olmayan tipler uchcun typecasting-dir
	// dynamic_cast<new_type>(expression) - polimorf olan tipler uchcun typecasting-dir
	// const_cast<new_type>(expression)
	// reinterpret_cast<new_type>(expression)

	int a{ 46 }, b{ 13 };
	////float result = a / (float)b;
	//float result = a / static_cast<float>(b);
	//cout << result << endl;

	int* ptrA = &a;

	/*double* ptrDoubleA = (double*)ptrA;*/

	double* ptrDoubleA = static_cast<double*>(ptrA);

	cout << *ptrDoubleA << endl;

}