#include<iostream>

using namespace std;

struct Book {
	char* name[50];
	char author[50];
	float price;
	int pages;
};

void showBook(Book book) {
	cout << "-------------------------------" << endl;
	cout << "Name:    " << book.name << endl;
	cout << "Author:  " << book.author << endl;
	cout << "Price:   " << book.price << endl;
	cout << "Page:    " << book.pages << endl;
	cout << "-------------------------------" << endl;
}

int main() {
	/*
		w - open file for write
		r - open file for read
		a - open file for append

		wb - open file for binary write
		rb - open file for binary read
		ab - open file for binary append
	*/

	// file steram
	FILE* file;
	char str[] = "I Love STEP IT Academy.";
#pragma region putc, getc
	// absolute path
	// C:\\Users\\zamanov\\source\\repos\\CPP_FSDA_Oct_24_5_az\\CPP 21. Files\\text.txt
	// fopen_s(&file, "C:\\Users\\zamanov\\source\\repos\\CPP_FSDA_Oct_24_5_az\\CPP 21. Files\\text.txt", "w");

	// relative path
	// text.txt - bu fayli menim working directory nsibeten yazacaq
	// fopen_s(&file, "text.txt", "w");

	// write to file symbol by symbol
	/*fopen_s(&file, "text.txt", "w");

	if (file != NULL) {
		for (int i = 0; i <= strlen(str); i++)
		{
			putc(str[i], file);
		}
		fclose(file);
	}
	else cout << "File open error!!!" << endl;*/


	// read to file symbol by symbol
	//fopen_s(&file, "text.txt", "r");
	//char buffer[100]{};
	//if (file == NULL) {
	//	cout << "File not found!!!";
	//	/*return 0;*/
	//}
	//else {
	//	int i{};
	//	while ((buffer[i++] = getc(file)) != EOF);
	//	cout << buffer << endl;
	//	fclose(file);
	//}
#pragma endregion

#pragma region fputs, fgets
	/*fopen_s(&file, "textStr.txt", "w");
	if (file != NULL) {
		fputs(str, file);
		fclose(file);
	}
	else cout << "File open error!!!" << endl;*/


	/*char buffer[100]{};
	fopen_s(&file, "textStr.txt", "r");
	if (file != NULL) {
		fgets(buffer, 100, file);
		cout << buffer << endl;
		fclose(file);
	}
	else cout << "File open error!!!" << endl;*/

#pragma endregion


#pragma region fprintf, fscanf_s
	//Book book1{ "PercyJackson", "RickRiordan", 65.23, 856 };
	///*showBook(book1);*/
	//fopen_s(&file, "book.txt", "w");
	//if (file != NULL) {
	//	fprintf(file, "Name: %s Author: %s Page: %d Price: %.2f",
	//		book1.name, book1.author, book1.pages, book1.price);
	//	fclose(file);
	//}

	//Book book2;
	//fopen_s(&file, "book.txt", "r");
	//if (file != NULL) {
	//	fscanf_s(file, "Name: %s Author: %s Page: %d Price: %f",
	//		book2.name, sizeof(book2.name),
	//		book2.author, sizeof(book2.author),
	//		&book2.pages,
	//		&book2.price);
	//	fclose(file);
	//	showBook(book2);
	//}

#pragma endregion

#pragma region fwrite, fread
	/*int numb{ 3541 };
	fopen_s(&file, "number.nadir", "wb");
	if (file != NULL) {
		fwrite((char*)&numb, sizeof(int), 1, file);
		fclose(file);
	}*/

	/*int number{};
	fopen_s(&file, "number.nadir", "rb");
	if (file != NULL) {
		fread((char*)&number, sizeof(int), 1, file);
		fclose(file);
		cout << number << endl;
	}*/


	/*int arr[]{ 65, 15, 789, 74, 23, 78 };
	fopen_s(&file, "numbers.dat", "wb");
	if (file != NULL) {

		fwrite((char*)arr, sizeof(int), 6, file);
		fclose(file);
	}*/

	/*int arr2[6]{};
	fopen_s(&file, "numbers.dat", "rb");
	if (file != NULL)
	{
		fread((char*)arr2, sizeof(int), 6, file);
		fclose(file);
		for (size_t i = 0; i < 6; i++)
		{
			cout << arr2[i] << ' ';
		}
		cout << endl;
	}*/


	/*Book book1{ "Percy Jackson", "Rick Riordan", 65.23, 856 };*/

	/*showBook(book1);*/
	/*fopen_s(&file, "book.dat", "wb");
	if (file != NULL) {
		fwrite((char*)&book1, sizeof(Book), 1, file);
		fclose(file);
	}*/

	/*Book book2;
	fopen_s(&file, "book.dat", "rb");
	if (file != NULL) {
		fread((char*)&book2, sizeof(Book), 1, file);
		fclose(file);
		showBook(book2);
	}*/


	/*int* arr = new int[5] {25, 98, 7, 39, 4};
	int length = 5;
	fopen_s(&file, "numbersdynamic.dat", "wb");
	if (file != NULL) {
		fwrite((char*)&length, sizeof(int), 1, file);
		for (size_t i = 0; i < length; i++)
		{
			fwrite((char*)&arr[i], sizeof(int), 1, file);
		}
		fclose(file);
	}*/



//fopen_s(&file, "numbersDynamic.dat", "rb");
//
//if (file != NULL) {
//	int l{};
//	fread((char*)&l , sizeof(int), 1, file);
//	int* arr2 = new int[l];
//	for (int i = 0; i < l; i++)
//	{
//		fread((char*)&arr2[i], sizeof(int), 1, file);
//	}
//	fclose(file);
//	for (size_t i = 0; i < 5; i++)
//	{
//		cout << arr2[i] << endl;
//	}
//}

#pragma endregion


}