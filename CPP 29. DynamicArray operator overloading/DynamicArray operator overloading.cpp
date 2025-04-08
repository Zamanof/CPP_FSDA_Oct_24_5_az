#include "DynamicArray.h"

void foo(DynamicArray array){}

int main() {
	srand(time(NULL));

	DynamicArray arr1(20);
	arr1.randomize();
	foo(arr1);
	/*cout << arr1;*/
	/*arr1.show();*/
	/*DynamicArray arr2(10);
	arr2.randomize();*/
	/*cout << arr2;*/
	/*arr2 = arr1;*/
	/*cout << arr2;*/
	/*arr2.show();*/

	///*DynamicArray arr3(15);
	//cin >> arr3;
	//cout << arr3;*/
	//
	//cout << arr1;
	//arr1[0] = 15;
	//cout << arr1[0] << endl;
	//cout << arr1;


	/*DynamicArray left(3);
	left[0] = 5;
	left[1] = 455;
	left[2] = 56;
	cout << left;
	DynamicArray right(3);
	right = left;
	right[0] = 364;
	cout << right;
	cout << boolalpha << (left == right) << endl;
	cout << boolalpha << (left != right) << endl;*/
}

// Gelen derse qeder arashdirin (Mutleq sorushacam): Move Constructor 