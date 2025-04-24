#include<iostream>

using namespace std;

int main() {
	// Casts
	// reinterpret_cast<new_type>(expression)
	// proqramlashdirma noqteyi nezerinden duzgun olmayan unvan typecastingleri yerine yetirmek uchundur

	int a{ 46 };

	int* ptrA = &a;

	/*double* ptrDoubleA = (double*)ptrA;*/

	double* ptrDoubleA = reinterpret_cast<double*>(ptrA);

	cout << *ptrDoubleA << endl;

	

}