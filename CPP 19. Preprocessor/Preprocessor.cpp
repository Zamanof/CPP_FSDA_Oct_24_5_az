#include"arrayio.h"
#include"macros.h"
#include"MyLangauage.h"

#define PI 3.14159265359
#define E 2.71828182846



int main() {
	srand(time(NULL));
	/*
		C++ layihenin "yiqilmasi" etaplari:
			1. Preprocessing
			2. Compile -> obj
			3. Linker -> exe
	*/

	// preprocessor directive
#pragma region include - pragma once
	// #include - fayl ve ya kitabxanalarin birleshdirilmesi uchun lazimdir
	/*const int length{ 25 };
	int arr[length]{};
	fillArray(arr, length);
	showArray(arr, length);*/
	// #pragma once - faylin bir defeden chox istifadesinin qarshini alir
#pragma endregion

#pragma region define
	// #define constant deyerler yaratmaq uchun istifade edile bilier
	// #undef define olmush deyeri leqv etmek uchundur
	/*cout << PI * 265 << endl;
#undef PI
#define PI 5
	cout << PI * 265 << endl;
	cout << E << endl;*/

	// #define ile makros yarada bilirem
	/*cout << SQR(5) << endl;
	cout << SQR(12) << endl;
	cout << CUBE(3) << endl;*/

	tam_eded eded{};
	input(eded);
	/*print(eded);*/
	eger(eded kichikdir 5)
		begin
			print("Salam");
		end
	eks_halda
		begin
			print("Saqol");
		end

			sonsuzluq print("Hello");


#pragma endregion



}