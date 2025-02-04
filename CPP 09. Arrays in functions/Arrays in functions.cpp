#include<iostream>

using namespace std;

// funksiya ancaq bir ishi gormelidir ve bu ishi yaxshi gormelidir

void showArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void fillArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 101;
	}
}

void fillArrayRange(int arr[], int length, int start, int end) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % (end - start + 1) + start;
	}
}


void changeArrayValue(int arr[]) {
	arr[0] = 25;
}

int main() {
	// arrays in function
	srand(time(NULL));
	const int length{ 25 };
	int arr[length]{};

	fillArray(arr, length);


	showArray(arr, length);
	showArray(arr, length);

	/*int arr2[30]{};
	fillArrayRange(arr2, 30, 0, 3);
	showArray(arr2, 30);*/



	cout << '\n';
	// P.S. Funksiyalarin ichinde maksimum derecede
	// platformadan asili olan kod hisselerini yazmaqdan chekinin
	// Meselen: cin, cout - konsoldan asililiq yaradir
}