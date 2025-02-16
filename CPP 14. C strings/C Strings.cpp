#include<iostream>

using namespace std;

int main() {
	// C strings

	/*char word[6]{ 'S', 'a', 'l', 'a', 'm', '\0'};*/
	// \0 - null terminator

	/*for (int i = 0; i < 5; i++)
	{
		cout << word[i];
	}
	cout << '\n';
	cout << "\n";

	*/

	/*cout << word << endl;*/

	//char word2[6]{ "Salam" };
	//cout << word2 << endl;
	//cout << '\n';
	//char word3[6] = "Hello";
	//cout << word3 << endl;
	//cout << "\n";
	/*char word4[] = "Azerbaijan";*/
	//cout << word4 << endl;

	/*cout << sizeof('\n') << endl;
	cout << sizeof("\n") << endl;*/
	/*char arr[] = "\n";
	for (size_t i = 0; i < 2; i++)
	{
		cout << (int)arr[i] << endl;
	}*/

	/*char hello[50];
	cin >> hello;

	cout << hello << endl;*/
	/*int a = 5;
	const char* word = "Hello Azerbaijan";
	cout << word << endl;

	char* name = new char[50];
	cin >> name;
	cout << name << endl;*/


	/*char myName[] = "Nadir Zamanov";
	cout << myName << endl;
	cout << (int)myName[5] << endl;*/


	char name1[]{ "Nadir" }, name2[]{ "Nadir" };

	cout << boolalpha << (name1 == name2) << endl;
}