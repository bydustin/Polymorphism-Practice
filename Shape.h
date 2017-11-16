#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
public:
	int centerX, centerY, size;
	Shape(int newX = 0, int newY = 0, int newSize = 0)
		:centerX(newX), centerY(newY), size(newSize) {
	}
	virtual double area() = 0;
	virtual void draw() = 0;
	virtual ~Shape() {
	}
};

#endif