#include<iostream>

using namespace std;

void foo(const int* numb1, const int& numb2, int* numb3) {
	/*int* fooNumber = const_cast<int*>(numb1);*/
	/**fooNumber = 184;*/
	*(const_cast<int*>(numb1)) = 45;

	const_cast<int&>(numb2) = 15;
}

int main() {
	// Casts
	// const_cats<new_type>(expression)
	// konstantliqi sile ve ya elave ede biler
	// onceden const olan deyishenlerin konstantliqini silmek ve ya elave etmek nunkun deyil
	// const_cast yalniz pointer ve reference-lerle ishleyir

	int numb1{ 12 }, numb2{ 423 }, numb3{ 33 };
	cout << "Before function calling" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	cout << "numb3 = " << numb3 << endl;
	foo(&numb1, numb2, &numb3);
	cout << "\nAfter function calling" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	cout << "numb3 = " << numb3 << endl;
}