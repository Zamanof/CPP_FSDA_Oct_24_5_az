#include<iostream>

using namespace std;

int main() {
	/*
	 operators:

		unar: bir operandla ishleyen operatorlar
			-, +, *, &, ++, --, !
		binar: iki operandla ishleyen operatorlar
			-, +, *, /, %, =, +=, -=, *=, /=, <<, >>, &, |, &&, ||, ==, >, <, >=, <=, !=
		ternar: uch operandla ishleyen operator
			?:
	*/
	// = assign operator (menimsetme operatoru)

	// arithmetic operators +, -, *, /, %, ++, --
	/*int number1 = 5;
	int number2 = 3;

	cout << number1 / number2 << endl;*/

	// % - modulda bolme operatoru yalniz tam edelerle ishleyir
	// int, short, long, long long, char, bool
	// unsigned int, unsigned short, unsigned long, unsigned long long, char

	//float numb = 253.5F;
	//// error
	//cout << numb % 2 << endl;


	/*
		increment: ++
			prefix:  ++variable
			postfix: variable++
		decrement: --
			prefix:  --variable
			postfix: variable--
	*/

	//int val = 5;
	//cout <<"val = " << val << endl; // 5
	//val++;
	//cout << "val++ =" << val << endl; // 6
	//val--;
	//cout << "val-- = " << val << endl; // 5
	//++val;
	//cout << "++val = " << val << endl; // 6
	//--val;
	//cout << "--val = " << val << endl; // 5

	/*int a = 87;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;*/

	/*int mynumb1 = 5;
	int mynumb2 = mynumb1++;

	cout << "mynumb1 = " << mynumb1 << endl;
	cout << "mynumb2 = " << mynumb2 << endl;*/

	/*int n = 5;*/
	// undefined behaivor
	/*cout << ++n << ++n << ++n << endl;*/    // 6 7 8
	/*cout << n++ << n++ << n++ << endl;*/		// 5 6 7
}