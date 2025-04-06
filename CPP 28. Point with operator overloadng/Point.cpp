#include "Point.h"

void Point::show() {
	cout << "Point(" << x << ", " << y << ")\n";
}

Point  Point::add(const Point& left , const Point& right){
	return Point(left.x + right.x, left.y + right.y);
}

double Point::distance(const Point& left , const Point& right){
	return sqrt(SQR(right.x - left.x) + SQR(right.y - left.y));
}

double Point::length(const Point& point){
	return sqrt(SQR(point.x) + SQR(point.y));
}

const Point Point::operator-() {
	return Point(-x, -y);
}

// prefix increment
Point& Point::operator++(){
	++x;
	++y;
	return *this;
}
// prefix decrement
Point& Point::operator--(){
	--x;
	--y;
	return *this;
}

// postfix increment
Point Point::operator++(int) {
	Point point(x, y);
	++x;
	++y;
	return point;
}
// postfix decrement
Point Point::operator--(int) {
	Point point(x, y);
	--x;
	--y;
	return point;
}

Point operator+(const Point& left, const Point& right){
	return Point::add(left, right);
}
double operator-(const Point& left, const Point& right){
	return Point::distance(left, right);
}
Point operator*(const Point& point, int value){
	return Point(point.x * value, point.y * value);
}

Point operator*(int value, const Point& point ) {
	return point * value;
}

bool operator==(const Point& left, const Point& right){
	return (left.x == right.x && left.y == right.y);
}
bool operator!=(const Point& left, const Point& right){
	return !(left == right);
}
bool operator> (const Point& left, const Point& right){
	return Point::length(left) > Point::length(right);
}
bool operator< (const Point& left, const Point& right){
	return Point::length(left) < Point::length(right);
}


ostream& operator<<(ostream& output, const Point& point){
	output << "Point(" << point.x << ", " << point.y << ")";
	return output;
}
istream& operator>>(istream& input, Point& point) {
	input >> point.x;
	input.ignore(1);
	input >> point.y;
	return input;
}