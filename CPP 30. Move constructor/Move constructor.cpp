#include"DynamicArray.h"


DynamicArray foo(DynamicArray arr) {
	// some operations;

	return arr;
}

int main() {
	srand(time(NULL));
/*  
	- Default constructor
	- Copy constructor
	- Move constructor
	- Destructor
*/
	// DF: DynamicArray()
	// CP: DynamicArray(int size)
	// CC: DynamicArray(const DynamicArray& other)
	// CA: DynamicArray& operator=(const DynamicArray&); 

	//DynamicArray arr1(10); // CP
	//arr1.randomize();
	//
	////DynamicArray arr2 = arr1; // CC
	// 
	////DynamicArray arr3; // DF -> CP
	//
	////arr3 = arr1; // CA

	//DynamicArray arr4;
	//arr4 = foo(arr1); // CC
	///*arr1.show();*/
	//// move(obj) -  move constructor-u ashkar olaraq chaqirmaq uchun funksiya


	DynamicArray array1(10000);
	DynamicArray array2 = move(array1);
	

}