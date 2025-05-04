#include<iostream>

using namespace std;

int main() {
	const int length = 6;
	int arr[length]{ 15, -4, 35, 112, -45, 36 };

	/*for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';*/

	/*string s = "Salam";
	for (auto item : arr) {
		cout << item << ' ';
	}
	cout << '\n';*/

	/*
		Iterators:
		input - girish iteratorlari
			unvanlanmish verilenleri yaddashdan 
			oxumaq uchun
		 ==, !=, *i, ++i, i++, *i++
		
		output - chixish iteratorlari
			verilenleri yaddasha yazmaq uchun unvanlayir

		  ++i, i++, *i = value, *i++ = value

		 forward - biristiqametli iteratorlar
				ozunde hem input hem de output iteratorlorin
				xususiyyetlerin birleshdirir ve choxluqun
				evvelinden sonuna qeder hereket ede bilir
		  ==, !=, *i, ++i, i++, *i++, *i = value, *i++ = value

		  bidirectional - ikistiqametli iteratorlar
				ozunde hem input hem de output iteratorlorin
				xususiyyetlerin birleshdirir ve choxluqun
				evvelinden sonuna qeder ve eksine hereket ede bilir
			==, !=, *i, ++i, i++, *i++, --i, i--, *i--

		 random access - random access iteratorlar
				ozunde yuxarida gosterilen butun iteratorlarin
				xususiyyetlerin birleshdirir ve choxluqun
				evvelinden sonuna qeder ve eksine hereket ede bilir
			==, !=, *i, ++i, i++, *i++, --i, i--, *i--
			i+=n, i+n, i -= n, i - n, i1 - i2, i[n],
			i1 < i2, i1 <= i2, i1 > i2, i1 >= i2,
			*i = value, *i++ = value, *i-- = value
			
	P.S. Eslinde pointerler - random access iteratorlardir
	*/
	
	
}