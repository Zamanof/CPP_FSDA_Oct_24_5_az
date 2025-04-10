#include<iostream>
#include<vector>

using namespace std;

template<class T>
T add(T left, T right);

template<class T1, class T2>
T2 divide(T1 left, T1 right);

template<class T1, class T2>
class Test {
private:
	T1 field1;
	T2 field2;
public:
	Test(T1 a)
		: field1{ a }, field2{}
	{}
	void show() {
		cout << "Class template" << endl;
		cout << "field1 type = " << typeid(field1).name() << endl;
		cout << "field2 type = " << typeid(field2).name() << endl;
	}
	T1 maxValue(T1 otherValue) {
		if (field1 > otherValue) return field1;
		return otherValue;
	}

};

template<class T>
class Test<const char*, T> {
private:
	const char* field1;
	T field2;
public:
	Test(const char* a)
		: field1{ a }, field2{}
	{}
	void show() {
		cout << "Spesizlization class template" << endl;
		cout << "field1 type = " << typeid(field1).name() << endl;
		cout << "field2 type = " << typeid(field2).name() << endl;
	}
	const char* maxValue(const char* otherValue) {
		if (strcmp(field1, otherValue) == 1) return field1;
		return otherValue;
	}

};

int main() {
	/*
		static polymorphism:
			- function overloading
			- template functions
			- operator overloading
			- template classes
	*/

	/*cout << typeid(add<int>(5, 3)).name() << endl;*/
	/*cout << typeid(add<double>(5.56f, 3.64f)).name() << endl;*/

	 /*cout<< divide<double, int>(6.6, 2.78)<<endl;
	 cout<< typeid(divide<double, int>(6.6, 2.78)).name()<<endl;*/

	Test<int, double> test(25);
	/*test.show();*/
	/*cout << test.maxValue(2) << endl;*/

	Test<double, double> test1(25.5);
	/*test1.show();*/
	/*cout << test1.maxValue(25.59) << endl;*/

	Test<const char*, float> test2("Salam");
	test2.show();

	cout << test2.maxValue("Wello") << endl;


}

template<class T>
T add(T left, T right) {
	return left + right;
}

template<class T1, class T2>
T2 divide(T1 left, T1 right) {
	return left / right;
}