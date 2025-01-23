#include<iostream>

using namespace std;

int main() {
	// logical operators 
	// && - logical and
	/*cout << boolalpha << "true && true = " << (true && true) << endl;		// true
	cout << boolalpha << "true && false = " << (true && false) << endl;		// false
	cout << boolalpha << "false && true = " << (false && true) << endl;		// false
	cout << boolalpha << "false && false = " << (false && false) << endl;	// false
	*/

	/*char symbol{};
	cout << "Enter  symbol: " << endl;
	cin >> symbol;

	if (symbol >= '0' && symbol <= '9') {
		cout << "Reqemdir" << endl;
	}
	else {
		cout << "Reqem deyilddir" << endl;
	}*/

	// || - logical or
	/*cout << boolalpha << "true  || true = " << (true ||true) << endl;		// true
	cout << boolalpha << "true  || false = " << (true|| false) << endl;		// true
	cout << boolalpha << "false || true = " << (false|| true) << endl;		// true
	cout << boolalpha << "false || false = " << (false || false) << endl;	// false
	*/

	// ! - not
	//cout << boolalpha << "!true = " << !true << endl;	// false
	//cout << boolalpha << "!false = " << !false << endl;	// true


	// &&, || optimization example
	/*int numb{ 5 };*/

	/*(numb >= 0) && cout << "Eded musbetdir" << endl;
	(numb < 0) && cout << "Eded menfidir" << endl;*/

	/*(numb < 0) || cout << "Eded musbetdir" << endl;
	(numb >= 0) || cout << "Eded menfidir" << endl;*/

}