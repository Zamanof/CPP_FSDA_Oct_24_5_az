#include<iostream>

// memory - smart pointerler ve yaddashla baqli kitabxana
#include<memory>

using namespace std;
template<class T>
class my_smart_pointer {
private:
	T* ptr;
public:
	explicit my_smart_pointer(T* ptr = nullptr)
		:ptr{ ptr }
	{}
	~my_smart_pointer()
	{
		delete ptr;
	}
	T& operator*() const { return *ptr; }
	T* operator->() const { return ptr; }

};

class Test {
public:
	string text;
	Test() :text{ text } { cout << "Constructed" << endl; }
	~Test() { cout << "Destructed" << endl; }
	void testFoo() { cout << "Foo" << endl; }
};

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

void foo() {
	Test* test = new Test;
	/*return;*/
	/*throw new exception();*/
	delete test;
}

void foo1() {
	my_smart_pointer<Test> tmp(new Test);
	tmp->testFoo();
	(*tmp).testFoo();
	return;
}

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

#pragma region auto_ptr
	/*auto_ptr<Test> aPtr(new Test);
	aPtr->testFoo();*/
#pragma endregion

#pragma region unique_ptr
	/*unique_ptr<Test> uPtr(new Test);
	uPtr->testFoo();*/
#pragma endregion

#pragma region shared_ptr
	shared_ptr<ForShared> shared1(new ForShared("object1"));
	shared_ptr<ForShared> shared2(shared1);
	shared_ptr<ForShared> shared3(new ForShared("object2"));
	cout << shared1.use_count() << endl;
	cout << shared2.use_count() << endl;
	{
		shared_ptr<ForShared> shared2(shared1);
		cout << shared2.use_count() << endl;
	}
	cout << shared2.use_count() << endl;

#pragma endregion




}