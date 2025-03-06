#include"calcFunctions.h"
#include"ArrayFunctions.h"
#include"predicates.h"

typedef int(*func_pointer_t)(int, int);

typedef  unsigned long long int age_type;

void foo();

int* bar(int* left, float* right);


int main() {
	srand(time(NULL));
#pragma region pointer to function
	/*cout << add(5, 8) << endl;*/
	/*cout << add << endl;
	int (*ptrFunc)(int, int) = add;
	cout << sizeof(ptrFunc) << " byte" << endl;*/
	/*cout << ptrFunc(98, 78) << endl;*/

	/*void (*ptrFoo)(void) = foo;
	ptrFoo();*/

	/*int* (*ptrBar)(int*, float*) = bar;*/
	/*cout << add(5, 8) << endl;*/
	/*cout << add << endl;*/
	/*int (*ptrFunc)(int, int) = add;
	cout << ptrFunc(98, 78) << endl;*/

	/*void (*ptrFoo)(void) = foo;
	ptrFoo();*/

	/*int* (*ptrBar)(int*, float*) = bar;*/
#pragma endregion

#pragma region calculator with pointer to function
	/*int left{}, right{};
	short menuItem{};
	cout << "Enter first number:" << endl;
	cin >> left;
	cout << "Enter second number:" << endl;
	cin >> right;
	cout << "Choise operation:" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cin >> menuItem;
	enum operations{ADD = 1, SUBTRACT, MULTIPLY, DIVIDE};
	int (*calc)(int, int) = nullptr;
	
	switch (menuItem)
	{
	case ADD:
		calc = add;
		break;
	case SUBTRACT:
		calc = subtract;
		break;
	case MULTIPLY:
		calc = multiply;
		break;
	case DIVIDE:
		calc = divide;
		break;
	default:
		cout << "Incorrect menu item" << endl;
		break;
	}

	if (calc != nullptr) {
		cout << "Result = " << calc(left, right) << endl;

	}*/
#pragma endregion

#pragma region pointer to functions like arguments
	/*cout << calculator(5, 9, subtract) << endl;*/
	const int length = 30;
	int arr[length]{};
	FillArray(arr, length);
	ShowArray(arr, length);
	// static polimorphism
	showFilteredValue(arr, length, isNegative);
	showFilteredValue(arr, length, isPrime);
	showFilteredValue(arr, length, isOdd);
	showFilteredValue(arr, length, isEven);
	
#pragma endregion

#pragma region pointer to functions arrays
	
	/*func_pointer_t functions[4] = { add, subtract, multiply, divide };
	for (int i = 0; i < 4; i++)
	{
		cout << functions[i](3, 8) << endl;
	}*/
#pragma endregion


	
	
}

void foo() {
	cout << "Hello Foo" << endl;
	
}

int* bar(int* left, float* right) {
	return nullptr;
}