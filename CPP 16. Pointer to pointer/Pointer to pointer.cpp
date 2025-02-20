#include<iostream>

using namespace std;

int main() {
	// Pointer to pointer
	int num{ 56 };
	int* ptrNum{ &num };
	cout << "num =\t\t" << num << endl;
	cout << "*ptrNum =\t" << *ptrNum << endl;
	cout << "&num =\t\t" << &num << endl;
	cout << "ptrNum =\t" << ptrNum << endl;
	cout << "&ptrNum =\t" << &ptrNum << endl;

	int** ptrPtrNum = &ptrNum;
	cout << "ptrPtrNum =\t" << ptrPtrNum << endl;
	cout << "*ptrPtrNum =\t" << *ptrPtrNum << endl;
	cout << "**ptrPtrNum =\t" << **ptrPtrNum << endl;
	cout << "sizeof =\t" << sizeof(ptrPtrNum) << " byte" << endl;

}