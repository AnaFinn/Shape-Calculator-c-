#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_h

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Rectangle :Shape
{
	double length, width;
public:
	void setLength(double length);
	void setWidth(double width);

	double getLength();
	double getWidth();

	void calculateArea(Rectangle s);

	void calculateRecPerimeter(Rectangle s);

	void displayArea();

	void displayPerimeter();

};




#endif
