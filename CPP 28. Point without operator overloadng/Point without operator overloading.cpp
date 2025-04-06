#include"Point.h"

int main() {
	Point point1(2, 5);
	Point point2(3, 12);
	point1.show();
	point2.show();
	
	cout << boolalpha << Point::isEqual(point1, point2) << endl;
	
	Point point3 = Point::add(point1, point2);
	point3.show();

	Point point4 = Point::mult(point1, 15);
	point4.show();

	cout << Point::distance(point1, point2) << endl;
	cout << point1 - point2 << endl;
}