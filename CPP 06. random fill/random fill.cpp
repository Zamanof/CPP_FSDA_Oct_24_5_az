#include<iostream>

using namespace std;

int main() {
	srand(time(NULL));
	const int length = 50;
	int arr[length]{};
	int start{-47}, end{23};
	// rand()%(end - start + 1) + start
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand()%(end - start + 1) + start;
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << '\n';

}