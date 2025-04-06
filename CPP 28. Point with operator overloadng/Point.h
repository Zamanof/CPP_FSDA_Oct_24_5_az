#pragma once
#include<iostream>
#define SQR(x) (x)*(x)

using namespace std;
class Point
{
private:
	int x;
	int y;
	static Point add(const Point&, const Point&);
	static double distance(const Point&, const Point&);
	static double length(const Point& point);
public:
	Point(int x, int y) :x{ x }, y{ y } {}
	void show();

#pragma region unary -
	const Point operator-();
#pragma endregion

#pragma region increments, decrements
	// prefix increment
	Point& operator++();
	// prefix decrement
	Point& operator--();

	// postfix increment
	Point operator++(int);
	// postfix decrement
	Point operator--(int);
#pragma endregion

#pragma region Arithmetic operators
	friend Point operator+(const Point&, const Point&);
	friend double operator-(const Point&, const Point&);
	friend Point operator*(const Point&, int);
	friend Point operator*( int, const Point&);
#pragma endregion

#pragma region Comparison operators
	friend bool operator==(const Point&, const Point&);
	friend bool operator!=(const Point&, const Point&);
	friend bool operator> (const Point&, const Point&);
	friend bool operator< (const Point&, const Point&);
#pragma endregion

#pragma region input and output operators
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);
#pragma endregion




};

