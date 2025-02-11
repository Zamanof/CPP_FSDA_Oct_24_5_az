#include<iostream>

using namespace std;

// default arguments - default parametrlerimizin sayi
// istenilen qeder ola biler, lakin onlar hamisi
// parametrler siyahisinin sonunda olmalidir
int summ(int num1, int num2 = 0, int num3 = 0) {
	return num1 + num2 + num3;
}


int main() {

	cout << summ(5) << endl;
	cout << summ(5, 6) << endl;
	cout << summ(5, 6, 7) << endl;
	cout << summ(5, 6, 9) << endl;
}
