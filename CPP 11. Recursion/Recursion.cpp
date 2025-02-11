#include<iostream>

using namespace std;

void Foo(int i) {
	if (i == 500) return;
	cout << i << " Hello" << endl;
	Foo(i + 1);
}

long long Factorial(int numb) {
	if (numb == 0 || numb == 1) return 1;
	if (numb < 0) throw exception("Negative factorial olmaz!!!");
	
	long long factorial = 1;
	for (int i = 2; i <= numb; i++)
	{
		factorial *= i;
	}
	return factorial;
}

long long FactorialR(int numb) {
	if (numb == 0 || numb == 1) return 1; // BASE CASE - BAZA HAL !!!! YADDA SAXLAYIN.
	if (numb < 0) throw exception("Negative factorial olmaz!!!");
	
	return numb * FactorialR(numb - 1); // n! = n * (n-1)!
}

/*
	BUNU ZEHMET OLMASA YADDA SAXLAYIN!!!!!!!!

	Rekrsiyanin duzgun ishlemesi uchun 
	mueyyen shertle yazilmis return -  BASE CASE (BAZA HAL) olmalidir
	chunki funksiya bitmese bu STACK OVERFLOW (stekin dashmasina) error-a
	getirib chixara biler.
*/


int main() {
	// Recursion - Funksiyanin ozu ozunu chaqirmasi
	/*Foo(1);*/


	/*cout << Factorial(8) << endl;
	cout << FactorialR(8) << endl;*/
}