#include<iostream>

using namespace std;

int main() {
	// bitwise operators
#pragma region bitwise not ~
	//short number = 53; // 0 0 1 1 0 1 0 1
	//cout << number << endl; // 53
	//cout << ~number << endl; // -54 -> 1 1 0 0 1 0 1 0
	//cout << ~number + 1 << endl; // -53 -> 1 1 0 0 1 0 1 1 

	//short numb1 = 35, numb2 = 24;
	//cout << numb1 + (~numb2 + 1) << endl;
#pragma endregion

#pragma region bitwise and &
	// 0 & 0 = 0
	// 1 & 0 = 0
	// 0 & 1 = 0
	// 1 & 1 = 1

	/*unsigned char first{ 3 }, second{2};*/
	/*
		  0 0 0 0 0 0 1 1
		&
		  0 0 0 0 0 0 1 0
		  _______________
		  0 0 0 0 0 0 1 0
	*/
	/*cout << (int)(first & second) << endl;*/

	// bitlerin "yanili" olmasinin yoxlanmasi
	//unsigned char diods{ 15 };  // 0 0 0 0 1 1 1 1
	//unsigned char mask { 4 };   // 0 0 0 0 0 1 0 1
	//cout << (int)(diods & mask) << endl;

	//if ((diods & mask) == mask) {
	//	cout << "Butun yoxlanilan bitler qoshulub" << endl;
	//}
	//else {
	//	cout << "Butun yoxlanilan bitler qoshulmayib" << endl;
	//}

	// bitlerin maskaya gore "sondurulmesi"
	/*
		  0 0 0 0 1 1 1 1			  0 0 0 0 1 1 1 1
	  &       				->	  &
		~ 0 0 0 0 0 1 0 1			  1 1 1 1 1 0 1 0
		_________________			_________________
		  0 0 0 0 1 0 1 0			  0 0 0 0 1 0 1 0

	*/
	/*diods = diods & (~mask);
	cout << (int)diods << endl;*/


#pragma endregion

#pragma region bitwise or |
	// 0 | 0 = 0
	// 1 | 0 = 1
	// 0 | 1 = 1
	// 1 | 1 = 1
	//unsigned char diods{ 15 };   // 0 0 0 0 1 1 1 1
	//unsigned char mask { 81 };   // 0 1 0 1 0 0 0 1
	//							 // 0 1 0 1 1 1 1 1 
	//// maskaya gore bitlerin "yandirilmasi"
	//diods |=  mask; // diods = diods | mask
	//cout << (int)diods << endl;
#pragma endregion

#pragma region bitwise xor ^
	// 0 ^ 0 = 0
	// 1 ^ 0 = 1
	// 0 ^ 1 = 1
	// 1 ^ 1 = 0


	//unsigned char diods{ 15 };   // 0 0 0 0 1 1 1 1
	//unsigned char mask { 20 };   // 0 0 0 1 0 1 0 0
	///*
	//	0 0 0 0 1 1 1 1
	//   ^
	//	0 0 0 1 0 1 0 0
	//	---------------
	//	0 0 0 1 1 0 1 1
	//*/
	//// bitlerin "chevirilmesi"
	//diods ^= mask; // diods = diods ^ mask;
	//cout << (int)diods << endl;

	// metnin en sade shifrelenmesi
	//char password[20];
	//cout << "Enter password: " << endl;
	//gets_s(password, 20);
	//cout << "Normal password -> "<< password << endl;
	//
	//int key{};
	//cout << "Enter secret key: " << endl;
	//cin >> key;

	//// encode
	//for (int i = 0; i < strlen(password); i++)
	//{
	//	password[i] ^= key; // password = password ^ key;
	//}
	//cout << "Cipher password -> " << password << endl;

	//cout << "Enter secret key: " << endl;
	//cin >> key;

	//// decode
	//for (int i = 0; i < strlen(password); i++)
	//{
	//	password[i] ^= key; // password = password ^ key;
	//}
	//cout << "Normal password -> " << password << endl;

#pragma endregion

#pragma region bitwise shift <<, >>
// bitlerin surushdurulmesi
	// numb >> n = numb / 2**n
	int numb = 15;
	//numb >>= 3; // numb = numb >> 3
	//cout << numb << endl;

	// numb >> n = numb * 2**n
	numb <<= 3; // numb = numb << 3
	cout << numb << endl;
#pragma endregion


}