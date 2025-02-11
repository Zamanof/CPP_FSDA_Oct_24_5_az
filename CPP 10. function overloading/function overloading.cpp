#include<iostream>

using namespace std;

int add(int, int, int = 0);
float add(float, float);
float add(float, int);
float add(int, float);

int compareValues(int, int);
int compareValues(float, float);
int compareValues(double, double);
int compareValues(char, char);

int main() {
	/*cout << addInt(2, 78) << endl;
	cout << addFloat(2.9, 78.78) << endl;*/

	/*cout << compareValuesInt(25, 253) << endl;
	cout << compareValuesFloat(25.69, 25.3) << endl;
	cout << compareValuesChar('2', '3') << endl;*/

	// function overloading
	// eyni adda olan amma ferqli ferqli parametlerle 
	// ishleye bilen funksiyalar
	// (ferqli siqnaturali funksiyalar)

	/*cout << compareValues(25, 253) << endl;
	cout << compareValues(25.69f, 25.3f) << endl;
	cout << compareValues('8', '3') << endl;*/

	/*cout << add(25, 6) << endl;
	cout << add(25, 6, 87) << endl;
	cout << add(25.6f, 6.42f) << endl;
	cout << add(25.6f, 5) << endl;
	cout << add( 5, 25.6f) << endl;*/

	// function overloading statik polimorfizm hesab edilir

	// funksiyalar 3 kriteriyaya esasen overload olur
	// 1. argumentlerin tipine gore
	// 2. arqumentlerin sayina gore
	// 3. arqumentlerin yerine gore
	// return type gore overload mumkun deyil

	cout << add(25, 69, 98) << endl;
	cout << add(25, 69) << endl;
}
int add(int numb1, int numb2, int numb3) {
	return numb1 + numb2 + numb3;
}

float add(float numb1, float numb2) {
	return numb1 + numb2;
}

float add(float numb1, int numb2) {
	return numb1 + numb2;
}

float add(int numb1, float numb2) {
	return numb1 + numb2;
}

int compareValues(int left, int right) {
	if (left > right) return 1;
	else if (left < right) return -1;
	else return 0;
}

int compareValues(float left, float right) {
	if (left > right) return 1;
	else if (left < right) return -1;
	else return 0;
}

int compareValues(double left, double right) {
	if (left > right) return 1;
	else if (left < right) return -1;
	else return 0;
}

int compareValues(char left, char right) {
	if (left > right) return 1;
	else if (left < right) return -1;
	else return 0;
}