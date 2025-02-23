#include<iostream>

using namespace std;

struct myStruct {
	short a;
	int b;
	short d;
	double c;
	
};


int main() {
	// struct allingment
	cout << sizeof(myStruct) << " byte" << endl;
}