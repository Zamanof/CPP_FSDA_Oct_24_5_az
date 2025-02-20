#include<iostream>

using namespace std;

int main() {
	// Jagged arrays
	int** jagged = new int*[3]; // -> 8 + (3*8) + (18*4) = 104 byte 
	jagged[0] = new int[5];
	jagged[1] = new int[3];
	jagged[2] = new int[10];

	int mdArr[3][10]; // -> 120 byte



}