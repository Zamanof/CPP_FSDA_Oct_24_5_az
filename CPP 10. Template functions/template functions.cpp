#include<iostream>

using namespace std;

template <class T>
T add(T left, T right) {
	return left + right;
}

template<class T1, class T2> 
T1 add(T1 left, T2 right) {
	return left + right;
}


template <typename T>
int compareValues(T left, T right);

int main() {
#pragma region type auto
	// auto - deyere gore tipi avtomatik teyin edir
	/*auto number = 56;*/
#pragma endregion

	cout << compareValues(25, 253) << endl;
	cout << compareValues(25.69f, 25.3f) << endl;
	cout << compareValues('8', '8') << endl;
	cout << compareValues(85.2, 98.84) << endl;

	/*cout << add(52, 3) << endl;
	cout << add(52.85, 3.5) << endl;
	cout << add(52.85, 3) << endl;
	cout << add(52, 3.56) << endl;*/
}

template <typename T>
int compareValues(T left, T right) {
	if (left > right) return 1;
	else if (left < right) return -1;
	else return 0;
}


