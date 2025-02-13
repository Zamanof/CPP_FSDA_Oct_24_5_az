#include<iostream>

using namespace std;

int main() {
#pragma region pointers
	// Pointers - deyshenlerin unvanini saxlayan datatype-lardir

		//int numb{ 53 };
		//int* ptrNumb = &numb; // * - pointer, & - adress of (unvanin goturulmesi operatoru)
		//cout << "numb = " << numb << endl;
		/*cout << "ptrNumb = " << ptrNumb << endl;*/
		//cout << "&numb = " << &numb << endl;
		//cout << "*ptrNumb = " << *ptrNumb << endl; // * - dereference

		//*ptrNumb = 36;

		//cout << "numb = " << numb << endl;

		// Pointer-lerin olchusu OS - in bitrateinden asilidir
		// X86 - 32 bit OS-lerde 4 byte
		// X64 - 64 bit OS-lerde 8 byte

		//cout << "sizeof(numb) = " << sizeof(numb) << " byte" << endl;
		//cout << "sizeof(ptrNumb) = " << sizeof(ptrNumb) << " byte" << endl;
		//double doubleVar{ 25.6 };

		//double* ptrDoubleVar = &doubleVar;
		///*cout << ptrDoubleVar << endl;*/
		//cout << "sizeof(doubleVar) = " << sizeof(doubleVar) << " byte" << endl;
		//cout << "sizeof(ptrDoubleVar) = " << sizeof(ptrDoubleVar) << " byte" << endl;
	// Pointers - deyshenlerin unvanini saxlayan datatype-lardir

		//int numb{ 53 };
		//int* ptrNumb = &numb; // * - pointer, & - adress of (unvanin goturulmesi operatoru)
		//cout << "numb = " << numb << endl;
		/*cout << "ptrNumb = " << ptrNumb << endl;*/
		//cout << "&numb = " << &numb << endl;
		//cout << "*ptrNumb = " << *ptrNumb << endl; // * - dereference

		//*ptrNumb = 36;

		//cout << "numb = " << numb << endl;

		// Pointer-lerin olchusu OS - in bitrateinden asilidir
		// X86 - 32 bit OS-lerde 4 byte
		// X64 - 64 bit OS-lerde 8 byte

		//cout << "sizeof(numb) = " << sizeof(numb) << " byte" << endl;
		//cout << "sizeof(ptrNumb) = " << sizeof(ptrNumb) << " byte" << endl;
		//double doubleVar{ 25.6 };

		//double* ptrDoubleVar = &doubleVar;
		///*cout << ptrDoubleVar << endl;*/
		//cout << "sizeof(doubleVar) = " << sizeof(doubleVar) << " byte" << endl;
		//cout << "sizeof(ptrDoubleVar) = " << sizeof(ptrDoubleVar) << " byte" << endl;

	/*int number{ 12 };
	int* ptrNumber = &number;
	int* ptrNumber2 = &number;

	cout << ptrNumber << endl;
	cout << ptrNumber2 << endl;
	*ptrNumber = 87;
	cout << number << endl;
	*ptrNumber2 = 78;
	cout << number << endl;

	int* ptr = ptrNumber;
	cout << ptr<< endl;
	cout << *ptr<< endl;

	int other{ -25 };
	ptrNumber = &other;
	cout << ptrNumber << endl;
	cout << *ptrNumber << endl;*/
#pragma endregion

#pragma region nullptr
	// int* ptr2 = nullptr; // nullptr - pointer-lerin default deyeri
		/*int* ptr3{};*/
		/*if (ptr3 == nullptr) cout << "deyer nullptr-dir" << endl;
		else cout << "deyer nullptr deyildir" << endl;*/
#pragma endregion

#pragma region pointer to const
		//const int num{ 45 };
		//const int num2{ 78 };
		//const int* ptrNum = &num; 
		//// const deyishenlerin unvanini yalniz
		//// pointer to constant - a menimsetmek olar;
		//cout << *ptrNum << endl;
		//ptrNum = &num2;
		//cout << *ptrNum << endl;

#pragma endregion


	/*
	int* ptr;   - pointer to variable
	const int* ptr;   - pointer to const variable
	int* const ptr;   - const pointer to variable
	const int* const ptr;   - const pointer to const variable

	*/
	// const pointer to variable
	//int numb = 35;
	//int numb2 = 78;
	//int* const ptrNumb = &numb;
	////ptrNumb = &numb2; // error
	//*ptrNumb = 8778;
	//cout << numb << endl;

	// const pointer to const variable
	const int var = 24;
	const int* const ptr = &var;

}