#include"DynamicArray.h"

void Foo(DynamicArray arr) {

}

int main() {
	srand(time(NULL));
	// Her class-in ichinde default olaraq:
	// Default Constructor
	// Default Copy Constructor
	// Default Move Consrtuctor
	// Default Destructor

	DynamicArray arr(10);
	arr.randomize();
	arr.show();


	DynamicArray arr2 = arr;
	arr2.setElement(0, 156);
	/*arr2.randomize();*/
	arr2.show();

	/*Foo(arr);*/
	
}