#include<iostream>

using namespace std;

// functions prototype
float returnPi();
void sayHello();
void showBornYear(int salam, int saqol);
int summ(int, int, int);
void showArray(int[], int);
void fillArray(int arr[], int length, int start = 0, int end = 100);


int main() {
	const int length{ 30 };
	int arr[length]{};
	fillArray(arr, length, -50, 50);
	showArray(arr, length);
	showBornYear(2025, 1980);

}

float returnPi() {
	return 3.14f;
}

void sayHello() {
	cout << "Hello everyone!!!" << endl;
	cout << "Hello STEP!!!" << endl;
	cout << "Hello FSDA_Oct_24_5_az!!!" << endl;
	cout << "Hello Lorem ipsum dolor sit amet!!!" << endl;
}

void showBornYear(int currentYear, int age) {
	int bornYear = currentYear - age;
	cout << bornYear << endl;
}

int summ(int num1, int num2 = 0, int num3 = 0) {
	return num1 + num2 + num3;
}

void showArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void fillArray(int arr[], int length, int start, int end) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % (end - start + 1) + start;
	}
}