#include"DynamicArray.h"

// shallow copy (uzden kopyalama) 
void Foo(DynamicArray arr) {
	cout << arr.getElement(2) << endl;
	/*cout << arr.arr << endl;
	cout << &arr.size << endl;*/
}

void Bar(int* a, int b) {
	cout << "a = " << a << endl;
	cout << "&b = " << &b << endl;
}
int main() {
	//DynamicArray arr(20);
	//arr.randomize();
	//cout << "arr: " << endl;
	//arr.show();
	///*cout << arr.arr << endl;
	//cout << &arr.size << endl;*/

	//// shallow copy (uzden kopyalama) 
	//DynamicArray arr2;
	//arr2 = arr;
	//arr2.setElement(0, 25);
	//cout << "\narr2: " << endl;
	//arr2.show();
	//cout << "\narr: " << endl;
	//arr.show();

	//Foo(arr);
	int numb1{ 5 }, numb2{ 10 };
	cout << "&numb1 = " << &numb1 << endl;
	cout << "&numb2 = " << &numb2 << endl;
	Bar(&numb1, numb2);


}