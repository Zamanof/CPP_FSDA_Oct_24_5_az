#include<iostream>

using namespace std;


int main() {
	// variable - 
	// datatype name = value;

	/*int number = 25;
	cout << number << endl;
	number = 68;
	cout << number << endl;*/

	//int numb;  // declaration
	//numb = 25; // intialize

	//int numb1 = 26, numb2 = 12, numb3 = 35; // multiple declaration
	//cout << numb1 << " " << numb2 << " numb3 = " << numb3 << endl;


	// data types
	// numeric datatypes:
	int numb = 2;			// int - 4 byte       -2^31 ~ +2^31-1
	long numb3 = 26L;		// long - 4 byte      -2^31 ~ +2^31-1
	short numb2 = 364;		// short - 2 byte     -2^15 ~ +2^15-1
	long long numb4 = 3LL;	// long long - 8 byte -2^63 ~ +2^63-1
	
	char symbol = 'a';		// char - 1 byte	  -128 ~ 127,  -2^7 ~ 2^7-1

	// logical
	bool check = true;		// bool - 1 byte	0 ve ya 1, true ve ya false
	cout << boolalpha << check << endl;

	// real numbers
	float number1 = 25.6F;	 // float - 4 byte  - birqat deqiqlikli onluq kesr
	double number2 = 26.354; // double - 8 byte - ikiqat deqiqlikli onluq kesr
}