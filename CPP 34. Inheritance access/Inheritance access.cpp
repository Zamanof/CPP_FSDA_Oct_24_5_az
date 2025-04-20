#include<iostream>

using namespace std;

class BaseClass {
private:
	int privateBaseField = 354;
protected:
	int protectedBaseField = 453;
public:
	int publicBaseField = 15;
};

class DerivedPublic : public BaseClass
{
	void showAccessInfo() {
		// derived class uchun
		// public public olaraq qalir
		// protected protected olaraq qalir
		// private private olaraq qalir

		cout << ":public BaseClass" << endl;
		cout << "Have access public fields and methods. publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods. protectedBaseField = " << protectedBaseField << endl;
		cout << "Dont have access private fields and methods." << endl;
	}
};

class DerivedProtected : protected BaseClass
{
	void showAccessInfo() {
		// derived class uchun
		// public protected olur
		// protected protected olaraq qalir
		// private private olaraq qalir
		cout << ":protected BaseClass" << endl;
		cout << "Have access public fields and methods. publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods. protectedBaseField = " << protectedBaseField << endl;
		cout << "Dont have access private fields and methods." << endl;
	}
};

class DerivedPrivate : private BaseClass
{
	void showAccessInfo() {
		// derived class uchun
		// public private olur
		// protected private olur
		// private private olaraq qalir
		cout << ":protected BaseClass" << endl;
		cout << "Have access public fields and methods. publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods. protectedBaseField = " << protectedBaseField << endl;
		cout << "Dont have access private fields and methods." << endl;
	}
};

class ThirdInheritanceDerivedPublic : public DerivedPublic {
public:
	void method() {
		publicBaseField = 264; // public public olaraq qalib
		protectedBaseField = 78; // protected protected olaraq qalib
		/*privateBaseField = 45;*/ // private private olaraq qalib
	}
};

class ThirdInheritanceDerivedProtected : public DerivedProtected {
public:
	void method() {
		publicBaseField = 264; // public protected olub
		protectedBaseField = 78; // protected protected olaraq qalib
		/*privateBaseField = 45;*/ // private private olaraq qalib
	}
};

class ThirdInheritanceDerivedPrivate : public DerivedPrivate {
public:
	void method() {
		//publicBaseField = 264; // public private olub
		//protectedBaseField = 78; // protected private olub
		/*privateBaseField = 45;*/ // private private olaraq qalib
	}
};

int main() {

	ThirdInheritanceDerivedPublic publicObj;
	cout << publicObj.publicBaseField << endl;
	ThirdInheritanceDerivedProtected protectedObj;
	ThirdInheritanceDerivedPrivate privateObj;
}
