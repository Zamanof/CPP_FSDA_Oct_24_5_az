#include<iostream>

using namespace std;

void foo(float, float);
void bar(float, float);
void some(float, float);

int main() {
	// exceptions 
	// try-catch
	/*
		try{
			code block
			throw exception
		}
		catch(){
			Handled exception
		}
	*/

	cout << "Start of code" << endl;
#pragma region try-catch
	/*try
	{
		cout << "Before exception" << endl;
		throw 94;
		cout << "After exception" << endl;
	}
	catch (string ex)
	{
		cout << "String exception handled" << endl;
		cout << ex << endl;
	}
	catch (int ex)
	{
		cout << "Int exception handled" << endl;
		cout << ex << endl;
	}*/

	// division by zero error

	//try
	//{
	//	float number1{}, number2{};
	//	cout << "Enter first number" << endl;
	//	cin >> number1;
	//	cout << "Enter second number" << endl;
	//	cin >> number2;
	//	/*if (number2 == 0) throw exception("Zero division error");*/
	//	if (number2 == 0) throw number2;
	//	cout << number1 / number2 << endl;
	//}
	//catch (const std::exception& ex)
	//{
	//	cout << ex.what() << endl;
	//}
	//catch (float ex)
	//{
	//	cout << ex << endl;
	//}


#pragma endregion

#pragma region multi exception catch
	//try {
	//	int* arr = nullptr;
	//	int length;

	//	cout << "Enter array size:" << endl;
	//	cin >> length;

	//	if (length < 1 || length > 250) throw "size error";

	//	arr = new int[length];

	//	if (!arr) throw "memory allocation error";

	//	int number{};
	//	cout << "Enter any number:" << endl;
	//	cin >> number;

	//	if (number == 0) throw number;
	//	for (size_t i = 0; i < length; i++)
	//	{
	//		arr[i] = number;
	//	}
	//	throw 0.5;
	//}
	//catch (const char* ex) {
	//	cout << ex << endl;
	//}
	//catch (int ex)
	//{
	//	cout << "integer type exception = " << ex << endl;
	//}
	//catch (...) // universal catch bloku ve catch siyahisinin sonunda olmalidir  
	//{
	//	cout << "Other exception type" << endl;
	//}

#pragma endregion

#pragma region function exceptions handled variations
	/*foo(23, 0);*/
	try
	{
		/*foo(23, 0);
		bar(5, 0);*/
		some(2, 0);
	}
	catch (float ex)
	{
		cout << "Zero division error catch in main" << endl;
	}
	catch (const char* ex)
	{
		cout << "const char* error catch in main" << endl;
	}

#pragma endregion

	cout << "End of code" << endl;

}

void foo(float numb1, float numb2) {
	// v1 exception bir basha funksiyanin oz ichinde emal olunur
	try
	{
		/*if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;*/
		bar(numb1, numb2);
		throw "Salam";
	}
	catch (float ex)
	{
		cout << "Zero division error catch in function" << endl;
	}
}

void bar(float numb1, float numb2) {
	// v2 funksiyanin ichinde try-catch olmadiqi uchun,
	// exception funksiyanin chaqirildiqi yere qaytarilir

	if (numb2 == 0) throw "numb2";
	cout << numb1 / numb2 << endl;
}

void some(float numb1, float numb2) {
	try
	{
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;		
	}
	catch (float ex)
	{
		// v3 funksiyanin ichinde exception emal olunsa da
		// mueyyen sebelerden exception chaqirilan funksiyaya yoneldilir
		throw ex;
	}
}