#include<iostream>

using namespace std;

struct Some {
	int first;
	double second;
	Some* some;
};

int main() {

	/*cout << sizeof(Some) <<" byte" << endl;*/

	Some some1 = { 5, 93.14, nullptr };
	Some some2 = { 78, 63.25, &some1 };

	cout << some2.first << endl;
	cout << some2.second << endl;
	cout << some2.some->first << endl;
	cout << some2.some->second << endl;


	// Linked list, Double linked list, Queue, Stack


}