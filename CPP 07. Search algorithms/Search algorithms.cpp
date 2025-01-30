#include<iostream>

using namespace std;

int main() {
	srand(time(NULL));
	// Search algorithms
	const int length{ 100 };
	int arr[length]{};

	for (int i = 0; i < length; i++)
	{
		/*arr[i] = i + 1;*/
		arr[i] = rand() % 1000;
	}
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	cout << arr[50] << endl;
	int search{};
	int index{ -1 };

	cout << "Enter searching element: " << endl;
	cin >> search;
	int count{ 0 };
#pragma region Linear search O(n)
	for (int i = 0; i < length; i++)
	{
		count++;
		if (search == arr[i]) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		cout << search << " in index = " << index << endl;
	}
	else {
		cout << search << " not found." << endl;
	}
	cout << "Algorithm iteration = " << count << endl;
#pragma endregion


#pragma region Binary search O(log n)
	count = 0;
	index = -1;
	int start{ 0 }, end{ length - 1 }, mid{};
	while (start <= end)
	{
		count++;
		mid = (start + end) / 2;
		if (search == arr[mid])
		{
			index = mid;
			break;
		}
		else if (search > arr[mid]) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	if (index != -1) {
		cout << search << " in index = " << index << endl;
	}
	else {
		cout << search << " not found." << endl;
	}
	cout << "Algorithm iteration = " << count << endl;
#pragma endregion



	return 0;
}