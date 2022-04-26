#pragma once
#ifndef SHAPE_H
#define SHAPE_h

#include <iostream>
#include <string>

using namespace std;

class Shape
{
	double area;
	double perimeter;
public:
	void setArea(double area);

	double getArea();

	void setPerimeter(double perimeter);

	double getPerimeter();

	void calculateArea(Shape s);

	void displayArea(Shape s);

	void displayPerimeter(Shape s);

};






#endif