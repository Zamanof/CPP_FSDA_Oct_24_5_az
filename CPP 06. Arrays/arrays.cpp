#include<iostream>

using namespace std;

int main() {
	// arrays (massivler) 
	// -> eyni tipli deyerlerden ibaret choxluq

	// datatype name[size]
#pragma region Arrays initialize variations
// elan edilmesi v1
	/*int arr[3];*/ // bu massivler static massiv adlanir (yeni olchusu deyisdirile bilmir)

	// index massivin ichindeki elementlerin sira nomresi
	// arr[i] - i+1ci elemente muraciet:
	// yeni arr[0] bu birinci elemente muracietdir
	// indeksler 0-dan bashlayir

	// eger massivin elementleri inisializasiya olunmayibsa
	// massiv "zibil" ile dolur
	/*cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	arr[0] = 1;
	arr[1] = 126;
	arr[2] = 11125;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;*/

	// elan edilmesi v2


	//int arr2[3] { 25, 36, 98 }; // int arr2[3] = { 25, 36, 15 };
	//cout << arr2[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;

	// elan edilmesi v3
	/*int arr3[3]{};
	cout << arr3[0] << endl;
	cout << arr3[1] << endl;
	cout << arr3[2] << endl;*/

	// elan edilmesi v4
	/*const int SIZE = 5;
	int arr4[SIZE]{};*/

	// elan edilmesi v5

	/*int arr5[]{1, 874, 88, 98, 78};*/
#pragma endregion


	//const int length{ 15 };
	//int arr[length]{};

	//for (int i = 0; i < length; i++)
	//{
	//	/*arr[i] = i + 1;*/
	//	cin >> arr[i];
	//}

	//for (int i = 0; i < length; i++)
	//{
	//	cout << arr[i] << "  ";
	//}
	//cout << endl;

	 int arr1[4]{23.5, true, 'a', 2.3f}; // bu halda typepecasting olacaq

	 for (int i = 0; i < 4; i++)
	 {
		 cout << arr1[i] << endl;
	 }

}