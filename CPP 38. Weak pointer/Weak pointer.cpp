#include<iostream>

// memory - smart pointerler ve yaddashla baqli kitabxana
#include<memory>

using namespace std;

class ForShared {
private:
	string name;
	int* arr;
public:
	ForShared(string name)
		:arr{ new int[10000] }
	{
		cout << "Object " << name << " constructed" << endl;
	}
	~ForShared()
	{
		delete[] arr;
		cout << "Object " << name << " destructed" << endl;
	}
	void foo() {
		cout << "Foo" << endl;
	}
};



int main() {
	/*foo();*/
	/*foo1();*/

	/*
		Smart pointers:
		- auto_ptr
		- unique_ptr
		- shared_ptr
		- weak_ptr
	*/

	ForShared* shared = new ForShared("first");
	shared_ptr<ForShared> shPtr1(shared);
	shared_ptr<ForShared> shPtr2(shPtr1);
	cout << shPtr1.use_count() << endl;

	weak_ptr<ForShared> weak(shPtr1);
	cout << shPtr1.use_count() << endl;


	(static_cast<shared_ptr<ForShared>>(weak))->foo();


}