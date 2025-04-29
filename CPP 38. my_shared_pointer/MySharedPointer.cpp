#include<iostream>

using namespace std;

template<class T>
class my_shared_pointer {
private:
	T* ptr;
	size_t* count;
public:
	my_shared_pointer()
		:ptr{ptr}, count{nullptr}
	{}
	
	my_shared_pointer(T* ptr)
		:ptr{ptr}, count{new size_t(1)}
	{}
	
	my_shared_pointer(my_shared_pointer<T>& other)
		:ptr{other.ptr}, count{other.count}
	{
		(*count)++;
	}
	my_shared_pointer<T>& operator=(my_shared_pointer<T>& other) {
		if (count != nullptr) {
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = other.count;
		ptr = other.ptr;
		(*count)++;
		return this;
	}
	my_shared_pointer<T>& operator=(T* ptr) {
		if (count != nullptr) {
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = new size_t(1);
		this->ptr = ptr;
		(*count)++;
		return *this;
	}

	int use_count() const {
		return *count;
	}

	T& operator*() const { return *ptr; }
	T* operator->() const { return ptr; }

	~my_shared_pointer()
	{
		if (count != nullptr) {
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
	}



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

int main() {
	my_shared_pointer<ForShared> shared1(new ForShared("object1"));
	my_shared_pointer<ForShared> shared2(shared1);
	my_shared_pointer<ForShared> shared3(new ForShared("object2"));
	cout << shared1.use_count() << endl;
	cout << shared2.use_count() << endl;
	{
		my_shared_pointer<ForShared> shared2(shared1);
		cout << shared2.use_count() << endl;
	}
	cout << shared2.use_count() << endl;
}