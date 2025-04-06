#include"Point.h"

int main() {
	// operator overloading
	Point point(2, 5);
	Point point1(2, 2);
	Point point2 = -point1;
	/*point1.show();
	point2.show();*/
	/*++point1;
	point1.show();
	--point2;
	point2.show();
	point1++;*/

	/*Point point3 = point1++;
	point3.show();
	point1.show();*/

	/*Point point4 = point + point1;
	point4.show();*/
	/*cout << point - point1 << endl;*/

	/*Point point6 = point * 3;
	point6.show();

	Point point7 = 3 * point6;
	point7.show();*/

	/*cout << boolalpha << (point == point1) << endl;
	cout << boolalpha << (point != point1) << endl;
	cout << boolalpha << (point > point1) << endl;
	cout << boolalpha << (point < point1) << endl;*/

	Point p(2, 8);
	cout << p;
	cin >> p;
	cout << p;


}