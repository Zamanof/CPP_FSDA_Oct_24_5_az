#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
template<class T>
void show(const vector<T>& vec);

int main() {
	srand(time(NULL));
	vector<int> numbers(20);
	int start = 10, end = 25;
	generate_n(numbers.begin(), numbers.size(), [start, end]() {return rand() % (end - start + 1) + start; });
	show(numbers);

// 1. Deyishdirilmeyen emeliyyatlar (Non-modify operations)

// for_each() – ardicilligin her bir elementi uchun emeliyyat icra edir

// find() – axtarilan deyerin ardicilliqda ilk rast gelinen yerini qaytarir, tapilmasa .end() iteratoru qaytarilir

// find_if() – predikata esasen uygun gelen ilk elementi qaytarir, tapilmasa .end() qaytarilir

// count() – axtarilan deyerin neche defe gorunduyunu qaytarir
	/*cout << count(numbers.begin(), numbers.end(), 5) << endl;*/

// count_if() – predikata esasen uygun gelen elementlerin sayini qaytarir
	//cout << count_if(numbers.begin(), numbers.end(), [](int a) {return a < 0; }) << endl;

	/*cout << count_if(numbers.begin(), numbers.end(), [](int number) {
		if (number == 2) return true;
		if (number <= 1) return false;
		for (size_t i = 2; i <= number / 2; i++)
		{
			if (number % i == 0) return false;
		}
		return true; }
	) << endl;*/

// search() – ardicilliqda alt-ardicilligin ilk defe harada gorunduyunu qaytarir
	/*vector<int> vec{25, 9, 65, 78, 2};
	vector<int> sub_vec{9, 65};
	auto srch = search(vec.begin(), vec.end(), sub_vec.begin(), sub_vec.end());
	for (auto i = srch; i < vec.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << '\n';*/

// search_n() – ardicil `n` defe tekrar olunan elementlerden ibaret alt-ardicilligin ilk rast gelinen yerini qaytarir


// 2. Deyishdirici emeliyyatlar (Modified operations)

// copy() – ardicilligi ilk elementden bashlayaraq kopyalayir

// copy_if() – predikata esasen uygun gelenleri kopyalayir

// swap() – iki elementi yerlerini deyishir
	/*int a = 79, b = 34;
	cout << "a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;*/

// replace() – gosterilen deyere beraber olan elementleri evez edir
	/*replace(numbers.begin(), numbers.end(), 5, 125);
	show(numbers);*/

// replace_if() – predikata esasen uygun gelen elementleri evez edir
	/*replace_if(numbers.begin(), numbers.end(), [](int x) {return x < 0; }, 0);
	show(numbers);*/

// replace_copy() – ardicilligi kopyalayaraq bezi deyerleri deyishdirir

// replace_copy_if() – predikata esasen uygun gelenleri deyisherek kopyalayir

// fill() – butun elementleri eyni deyerle doldurur
	/*vector <string> words(21);
	fill(words.begin(), words.end(), "Empty");
	show(words);*/

// remove() – gosterilen deyere beraber olan elementleri silir

// remove_if() – predikata esasen uygun gelen elementleri silir
	/*auto rmv = remove_if(numbers.begin(), numbers.end(), [](int n) {return n < 0; });
	numbers.erase(rmv, numbers.end());
	show(numbers);*/

// remove_copy() – gosterilen deyeri silerek ardicilligi kopyalayir

// remove_copy_if() – predikata uygun gelenleri silerek ardicilligi kopyalayir

// reverse() – ardicilligin tersini alir
	/*reverse(numbers.begin(), numbers.end());
	show(numbers);*/

// random_shuffle – elementleri tesadufi shekilde qarishdirir
	/*random_shuffle(numbers.begin(), numbers.end());
	show(numbers);*/

// transform() – her bir elemente teyin olunmush emeliyyati tetbiq edir
	/*vector<int>multTwo;
	transform(numbers.begin(), numbers.end(), back_inserter(multTwo), [](int x) {return x * 2; });
	show(multTwo);*/

// unique() – eyni olan ardicil qonshu elementleri silir

// unique_copy() – eyni olan ardicil qonshulari silerek kopyalayir


// 3. Siralama emeliyyatlari (Sort operations)

// sort() – ardicilligi siralayir
	sort(numbers.begin(), numbers.end(), [](int a, int b) {return a < b; });
	show(numbers);

// partial_sort() – ardicilligin bir hissesini siralayir

// stable_sort() – beraber olan elementlerin sirasini saxlayaraq siralayir

// lower_bound() – gosterilen deyerden az olan ilk elementi tapir (siralanmish ardicilliq uchun)

// upper_bound() – gosterilen deyerden boyuk olan ilk elementi tapir

// binary_search() – siralanmish ardicilliqda gosterilen deyerin olub-olmadigini yoxlayir
auto find = binary_search(numbers.begin(), numbers.end(), 18);
if (find) {
	cout << "18 in vector" << endl;
}
else{
	cout << "18 not found" << endl;
}

// merge() – iki siralanmish ardicilligi birleshdirir


// 4. Setlerle ishleme (Set operations)

// includes() – bir set-in digerinin ichinde olub-olmadigini yoxlayir

// set_union() – iki set-in birleshmesini qaytarir

// set_intersection() – iki set-in kesishmesini qaytarir

// set_difference() – iki set-in ferqini qaytarir


// 5. Minimum ve maksimum emeliyyatlari

// min() – iki deyerden kichiyini qaytarir

// max() – iki deyerden boyuyunu qaytarir

// min_element() – ardicilliqda en kichik elementi tapir

// max_element() – ardicilliqda en boyuk elementi tapir


// 6. Permutasiyalar

// next_permutation() – leksikoqrafik olaraq novbeti permutasiyani qaytarir

// prev_permutation() – leksikoqrafik olaraq evvelki permutasiyani qaytarir

}

template<class T>
void show(const vector<T>& vec) {
	for (auto i : vec) {
		cout << i << ' ';
	}
	cout << '\n';
}