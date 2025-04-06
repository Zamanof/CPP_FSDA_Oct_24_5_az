#include "Point.h"

void Point::show() {
	cout << "Point(" << x << ", " << y << ")\n";
}

bool Point::isEqual(const Point& left, const Point& right) {
	return (left.x == right.x && left.y == right.y);
}
Point Point::add(const Point& left, const Point& right) {
	return Point(left.x + right.x, left.y + right.y);
}
Point Point::mult(const Point& left, int value) {
	return Point(left.x * value, left.y * value);
}
double Point::distance(const Point& left, const Point& right) {
	return sqrt((right.x - left.x) * (right.x - left.x) + (right.y - left.y) * (right.y - left.y));
}
