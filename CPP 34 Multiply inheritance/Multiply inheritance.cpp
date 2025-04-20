#include<iostream>

using namespace std;

class A {
public:
	int fieldA;
	A() { cout << "A constructor\n" << endl; }
	~A() { cout << "A destructor\n" << endl; }
	void methodA() { cout << "methodA\n" << endl; }
	void print() {
		cout << "A::print()" << endl;
		cout << "fieldA = " << fieldA << endl << endl;
	}
};

class B {
public:
	int fieldB;
	B() { cout << "B constructor\n" << endl; }
	~B() { cout << "B destructor\n" << endl; }
	void methodB() { cout << "methodB\n" << endl; }
	void print() {
		cout << "B::print()" << endl;
		cout << "fieldB = " << fieldB << endl << endl;
	}
};

class C : public A, public B {
public:
	int fieldC;
	C() { cout << "C constructor\n" << endl; }
	~C() { cout << "C destructor\n" << endl; }
	void methodC() { cout << "methodC\n" << endl; }
	void print() {
		A::print();
		B::print();
		cout << "C::print()" << endl;
		cout << "fieldC = " << fieldC << endl << endl;
	}
};

// diamond dead problem - olum almazi problemi
// rombvari toreme problemi

class D : public A, public C {
public:
	D() { cout << "D constructor\n" << endl; }
	~D() { cout << "D destructor\n" << endl; }
};

int main() {
	// Multiply inheritance
	/*C cObj;*/
	/*cObj.fieldA = 78;
	cObj.fieldB = 783;
	cObj.fieldC = 26;*/
	/*cObj.methodA();
	cObj.methodB();
	cObj.methodC();
	cObj.print();*/
	/*cObj.A::print();
	cObj.B::print();*/

	D dObj;
}