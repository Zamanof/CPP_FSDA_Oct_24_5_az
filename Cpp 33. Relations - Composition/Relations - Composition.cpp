#include<iostream>
#include<format>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y)
		:x{ x }, y{y}
	{
		cout << format("Point({},{}) was created\n", x, y);		
	}

	void update(int x, int y) {
		this->x = x;
		this->y = y;
	}

	~Point()
	{
		cout << format("Point({},{}) was deleted\n", x, y);
	}
};

class Image {
private:
	string name;
	int width;
	int height;
	Point position;
public:
	Image(string name,	int width,	int height, int x, int y)
		:name{ name }, width{width}, height{height}, position{x, y}
	{
		cout << format("Image {}.png was created\n", name);
	}
	~Image()
	{
		cout << format("Image {}.png was deleted\n", name);
	}
	void moveTo(int x, int y) {
		cout << format("Image {0}.png was moved to position({1}, {2})\n", name, x, y);
		position.update(x, y);
	}
};


int main() {

	/*
		Relations - elaqeler:
			- is: Inheritance(toreme)
			- has - malikdir(ozunde saxlayir): Aggregation(Aqreqasiya), Composition(Kompozisiya)
			- depends on - asilidir
			- uses - istifade edir
			- part-whole - hisse-tam: Nested classes

			Composition:
				1. obyekt-hisse obyekt-tamin terkibine daxildir.
				2. obyekt-hisse yalniz bir obyekt-tama aid ola biler
				3. obyekt-hisse obyekt-tam olmadan movcud ola bilmez. 
					Yeni ki obyekt-tam, obyekt-hissenin movcudluquna cavabdehdir.
				4. obyekt-hisse obyekt-tam haqqinda hech bir melumata malik deyil.

	*/

	Image image1("Eziyyet", 10000, 50000, 0, 0);
	Image image2("Itin zulumu", 1000, 150000, 58, 15);
	Image image3("Mona Lisa", 100, 50, 78, 119);
	/*image1.moveTo(25, 60);*/
}