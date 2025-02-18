#include<iostream>
#include<conio.h>

using namespace std;


int main() {
	// input functions

	// input string line

	/*char word[50]{};
	char* word2 = new char[50];*/
	/*cin >> word;
	cout << word << endl;*/

	// cin.getline(dest, buffer) - dest setrine konsoldan 
	// daxil edilen metn setrini (boshluqlarla birlikde) yazir
	/*cin.getline(word, 50);
	cin.getline(word2, 50);*/


	// gets_s(dest, buffer) - dest setrine konsoldan 
	// daxil edilen metn setrini (boshluqlarla birlikde) yazir
	/*gets_s(word, 50);
	gets_s(word2, 50);
	cout << word << endl;
	cout << word2 << endl;*/

	// input char symbol

	// getchar() - konsoldan daxil edilen 
	// bir simvolun ASCII kodunu qaytarir
	
	/*int code = getchar();
	cout << code << endl;*/


	// _getch() - konsoldan daxil edilen 
	// bir simvolun ASCII kodunu qaytarir (Enter basmaqa ehtiyac yoxdur)
	// conio.h kitabxanasinda yerleshir

	/*int code = {};
	while (true)
	{
		code = _getch();
		cout << code << endl;
	}*/

	// out functions

	// puts(str) - str setrini konsola chixarir

	/*char str[50];
	gets_s(str, 50);
	puts(str);*/

	// _putch(symbol) - symbol char simvolunu konsola chixarir
	/*char symb = _getch();
	_putch(symb);
	putchar(symb);*/


	// _strrev(str) - str metnini metni tersine chevirir
	char word[50] = "Salam Azerbaijan";
	_strrev(word);
	puts(word);

}