#include<iostream>

using namespace std;

class Enclosing {
private:
	int outerValue{ 5 };
public:
	class Inner {
	private:
		int innerValue1{ 4566 };
	public:
		int innerValue2{ -24 };
		void showInnerValues();
		void showOuterValuesInInnerClass();
	};

	Inner InnerObject; 
	void showOuterValues();
};

int main() {

	/*
		Relations - elaqeler:
			- is: Inheritance(toreme)
			- has - malikdir(ozunde saxlayir): Aggregation(Aqreqasiya), Composition(Kompozisiya)
			- depends on - asilidir
			- uses - istifade edir
			- part-whole - hisse-tam: Nested classes
	*/
}