#include<iostream>

using namespace std;
// funksiya deyer(ler) (parametr(ler)) qebul edir ve sonda deyer qaytarir
int sumTwoValue(int left, int right) {
	int result = left + right;
	// magic calculation code;
	// magic calculation code;
	// magic calculation code;
	return result;
}

// funksiya hech bir deyer(parametr) qebul etmir ve sonda deyer qaytarir
float returnPi() {
	// magic calculation code;
	// magic calculation code;
	// magic calculation code;
	return 3.14f;
}

// funksiya hech bir deyer(parametr) qebul etmir ve hech bir deyer qaytarmir
void sayHello() {
	cout << "Hello everyone!!!" << endl;
	cout << "Hello STEP!!!" << endl;
	return;
	cout << "Hello FSDA_Oct_24_5_az!!!" << endl;
	cout << "Hello Lorem ipsum dolor sit amet!!!" << endl;
}

// funksiya deyer(ler) (parametr(ler)) qebul edir, lakin hech bir deyer qaytarmir

void showBornYear(int currentYear, int age) {
	int bornYear = currentYear - age;
	cout << bornYear << endl;
	/*sayHello();*/
}


int main() {
	// functions - chaqirila bilen kod bloku

	// C++ -da funksiyanin ichinde funksiya yaratmaq (elan etmek) mumukun deyil 
	// local function definitions are illegal

	// C++ - da funksiyalar main funksiyasindan evvel elan edilmelidir 
	/*
		return_type function_name(parameters_list)
		{
			function_body;
			[return];
		}
	*/

	// void - bosh, hech bir deyer olmayan datatype-dir
	// adeten funksiyalarla birlikde ishledilir

	/*int first{}, second{};
	cout << "Enter first integer number:" << endl;
	cin >> first;
	cout << "Enter second integer number:" << endl;
	cin >> second;

	cout << sumTwoValue(first, second) << endl;*/
	/*cout << sumTwoValue(89, 78) << endl;
	int result = sumTwoValue(2, 6);
	cout << result << endl;*/

	/*cout << sumTwoValue(sumTwoValue(2, 6), sumTwoValue(25, 12));*/

	/*cout << returnPi() << endl;
	float PI = returnPi();
	cout << PI * 10 << endl;*/

	sayHello();

	/*showBornYear(2025, 1980);*/
	

	return 0;
}