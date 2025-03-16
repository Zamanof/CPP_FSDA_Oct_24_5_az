#include<iostream>

using namespace std;

class MyArray {
private:
	int* arr;
	int length;

public:
	MyArray()
	{
		length = 0;
		arr = nullptr;
	}
	MyArray(int Length)
	{
		length = Length;
		arr = new int[length];
	}
	void Show();

	~MyArray()
	{
		delete[] arr;
		/*cout << "Destructor" << endl;*/
	}

};
void MyArray::Show() {
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}cout << endl;
}



int main() {

	// Destructor - obyekt "olduyu" zaman chaqirilan method-dur
	// Destructor overload olunmur, ve hech bir parameter qebul etmir
	// Destructor class-da ayrilmish dinamik yaddashin silinmesi uchun istifade olunur
	/*while (true)
	{
		MyArray myarray(2500);
	}*/
	/*MyArray myarray(2500);*/
}