#include<iostream>

using namespace std;
void changeVariable(int* numb) {
	*numb += 3;
}

void changeVariableRef(int& numb) {
	numb += 3;
}

void mySwap(int* left, int* right) {
	int tmp = *left;
	*left = *right;
	*right = tmp;
}

void mySwapR(int& left, int& right) {
	int tmp = left;
	left = right;
	right = tmp;
}

template<class T>
void Swap(T& left, T& right) {
	T tmp = left;
	left = right;
	right = tmp;
}

int main() {
	// Reference - ozunde deyishenin unvanini saxlayir
	// proqramin sonuna reference bu unvana baqli qalir
	// Bele demek mumkunse reference deyishenin "ozudur",
	// bashqa adidir

	/*
	funksiyalara arqumentleri gonderme usullari:
	1. By value -> changeValue(int numb)
		- bu zaman funksiyaya deyishenin deyerinin kopyasi yazilir
		  funksiyanin ichinde deyisheni deyishsek
		  gonderilen deyishenin qiymetine tesir etmir
		  chunki funksiyada yaradilan deyishen ayri deyishendir
		  ve funksiya ishini bitirdikde "olur";

	2. By pointer -> changeValuePtr(int* numb)
		  - bu zaman funksiyaya deyishenin unvani gonderilir
		  funksiyanin ichinde deyisheni deyishsek
		  gonderilen deyishenin qiymeti de deyishecek
		  chunki funksiyada yaradilan deyishen gonderilen unvan vasitesi ile
		  deyishenin bir basha ozunun deyerini deyishir

	3. By reference -> changeValuePtr(int& numb)
		  - bu zaman funksiyaya deyishenin "ozu" gonderilir
		  funksiyanin ichinde deyisheni deyishsek
		  gonderilen deyishenin qiymeti de deyishecek
		  chunki funksiyada yaradilan deyishen gonderilen reference vasitesi ile
		  deyishenin bir basha ozunun deyerini deyishir
	*/
	//int number{ 5 }, number2{ 245 };
	//int* ptrNumber = &number;
	///*cout << "number = " << number << endl;
	//changeVariable(ptrNumber);
	//cout << "number = " << number << endl;*/

	//int& refNumber = number; // & - reference

	////cout << "number = " << number << endl;
	/////*changeVariableRef(number);*/
	////refNumber = 89;
	////cout << "number = " << number << endl;

	//refNumber = number2;

	//cout << "number = " << number << endl;
	//cout << "number2 = " << number2 << endl;
	//number2 = 45;
	//cout << "number = " << number << endl;
	//cout << "number2 = " << number2 << endl;
	//int numb1{ 5 }, numb2{ 245 };
	//cout << "numb1 = " << numb1 << ", numb2 = " << numb2 << endl;
	///*swap(numb1, numb2);*/
	///*mySwap(&numb1, &numb2);*/
	//mySwapR(numb1, numb2);
	//cout << "numb1 = " << numb1 << ", numb2 = " << numb2 << endl;

	/*char symb1{ '5' }, symb2{ 'a' };
	cout << "symb1 = " << symb1 << ", symb2 = " << symb2 << endl;
	swap(symb1, symb2);
	Swap(symb1, symb2);
	cout << "symb1 = " << symb1 << ", symb2 = " << symb2 << endl;*/
}