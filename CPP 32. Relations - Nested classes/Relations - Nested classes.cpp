#include<iostream>

using namespace std;

class Enclosing {
private:
	int outerValue{ 5 };
	
	class Inner {
	private:
		int innerValue1{ 4566 };
	public:
		int innerValue2{ -24 };
		void showInnerValues();
		void showOuterValuesInInnerClass(Enclosing&);
	};

public:

	Inner InnerObject;
	void showOuterValues();
};

void Enclosing::showOuterValues() {
	cout << "outerValue = " << outerValue << endl;
}

void Enclosing::Inner::showInnerValues() {
	cout << "innerValue1 = " << innerValue1 << endl;
	cout << "innerValue2 = " << innerValue2 << endl;

}

void Enclosing::Inner::showOuterValuesInInnerClass(Enclosing& obj) {
	// nested class (mes. Inner), 
	// xaricde olan class-in (mes. Enclosing)
	// private field ve methodlarina access-i
	// yoxdur

	// 
	obj.outerValue = 68;
	cout << "outerValue = " << obj.outerValue << endl;
}

int main() {

	/*
		Relations - elaqeler:
			- is: Inheritance(toreme)
			- has - malikdir(ozunde saxlayir): Aggregation(Aqreqasiya), Composition(Kompozisiya)
			- depends on - asilidir
			- uses - istifade edir
			- part-whole - hisse-tam: Nested classes

	*/

	/*Enclosing enclosingObject;
	enclosingObject.showOuterValues();
	enclosingObject.InnerObject.showInnerValues();
	enclosingObject.InnerObject.showOuterValuesInInnerClass(enclosingObject);
	enclosingObject.showOuterValues();*/

	// nested class-in obyektini bu shekilde yaratmaq mumkun deyil
	/*Inner innerObject;*/


	// Bu shekilde nested class-in obyektini yaratmaq mumkundur,
	// amma bunu etmek meslehet deyil. Chunki, nested class-in
	// istifadesi mentiqi pozulur.
	// Bu meselenin qarshisini almaq uchcun nested class-i
	// private etmek lazimdir

	/*Enclosing::Inner innerObject;
	innerObject.showInnerValues();*/
}