#include<iostream>

using namespace std;

void changeValue(int numb) {
	cout << "&numb in function = " << &numb << endl;
	numb += 10;
}

//  funksiyanin ichine gonderilen deyishenin "ozunun" gonderilmesi
void changeValuePtr(int* numb) {
	cout << "numb in function = " << numb << endl;
	cout << "in func " << *numb << endl;
	*numb += 10;
}

// funksiyanin ichinden "bir neche deyerin qaytarilmasi"
void findMinMax(int arr[], int length, int* max, int* min) {
	*max = arr[0];
	*min = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (arr[i] < *min) 	*min = arr[i];
		if (arr[i] > *max) 	*max = arr[i];
	}
}

int main() {
	/*funksiyalara arqumentleri gonderme usullari:
	1. By value -> changeValue(int numb)
		- bu zaman funksiyaya deyishenin deyerinin kopyasi yazilir
		  funksiyanin ichinde deyisheni deyishsek
		  gonderilen deyishenin qiymetine tesir etmir
		  chunki funksiyada yaradilan deyishen ayri deyishendir
		  ve funksiya ishini bitirdikde "olur";

	2. By pointer -> changeValuePtr(int* numb)
		  - bu zaman funksiyaya deyishenin unvani gonderilir
		  funksiyanin ichinde deyisheni deyishsek
		  gonderilen deyishenin qiymeti de deyishecek
		  chunki funksiyada yaradilan deyishen gonderilen unvan vasitesi ile
		  deyishenin bir basha ozunun deyerini deyishir
	*/

	/* 
		Pointerlerin islenme yerleri:
			1. funksiyanin ichine gonderilen deyishenin "ozunun" gonderilmesi 
				ve deyishdirile bilinmesi
			2. funksiyanin ichinden "bir neche deyerin qaytarilmasi"
	
	*/
	//int numb{ 78 };
	//cout << "&numb in main = " << &numb << endl;
	////cout << "Before call void changeValue(int numb) numb = " << numb << endl; // 78
	////changeValue(numb);
	////cout << "After call void changeValue(int numb) numb = " << numb << endl; //  78


	//  funksiyanin ichine gonderilen deyishenin "ozunun" gonderilmesi
	
	//cout << "Before call void changeValuePtr(int* numb) numb = " << numb << endl; // 78
	//changeValuePtr(&numb);
	//cout << "After call void changeValuePtr(int* numb) numb = " << numb << endl; //  78

	
	// funksiyanin ichinden "bir neche deyerin qaytarilmasi"
	int arr[5]{ 89, -56, 78, 10, -6358 };
	int min{}, max{};
	findMinMax(arr, 5, &max, &min);
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
}