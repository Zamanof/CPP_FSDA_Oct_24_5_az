#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y) :x{ x }, y{ y } {}
	void show();

	static bool isEqual(const Point&, const Point&);
	static Point add(const Point&, const Point&);
	static Point mult(const Point&, int);
	static double distance(const Point& , const Point&);
};

