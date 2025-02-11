#include<iostream>
#include<chrono>


using namespace std::chrono;
using namespace std;

void FillArray(int arr[], int length);
void ShowArray(int arr[], int length);

void quickSort(int arr[], int length);
void bubbleSort(int arr[], int length);
void selectionSort(int arr[], int length);
void insertionSort(int arr[], int length);

int main() {
	/*srand(time(NULL));*/
	const int length{ 250000 };
	int arr[length]{};
	FillArray(arr, length);
	/*ShowArray(arr, length);*/
	auto start_time = high_resolution_clock::now();
	quickSort(arr, length - 1);
	/*bubbleSort(arr, length);*/
	/*selectionSort(arr, length);*/
	/*insertionSort(arr, length);*/
	auto stop_time = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop_time - start_time);
	cout << "Duration = " << duration.count() << " milliseconds" << endl;
	cout << "Duration = " << duration.count() / 1000 << " seconds" << endl;
	ShowArray(arr, length);
}

void FillArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 1000000;
	}
}
void ShowArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void quickSort(int arr[], int length) {
	int i{ 0 }, j = length;
	int tmp{}, pos{};
	pos = arr[length / 2];

	do
	{
		while (arr[i] < pos) i++;
		while (arr[j] > pos) j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}

	} while (i <= j);

	if (j > 0) quickSort(arr, j);
	if (length > i) quickSort(arr + i, length - i);
}

void bubbleSort(int arr[], int length) {
	bool swapped{};
	int count{}, tmp{};
	do
	{
		swapped = false;
		for (int i = 0; i < length - 1 - count; i++)
		{

			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}
		count++;
	} while (swapped);
}
void selectionSort(int arr[], int length) {
	int min_index{}, min{};
	for (int i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[i];
		for (int j = i + 1; j < length; j++)
		{

			if (min > arr[j]) {
				min = arr[j];
				min_index = j;
			}
		}
		if (min_index != i) {
			arr[min_index] = arr[i];
			arr[i] = min;
		}

	}
}
void insertionSort(int arr[], int length) {
	int i{}, j{}, tmp{};
	for (i = 1; i < length; i++)
	{
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}
}