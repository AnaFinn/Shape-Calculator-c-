#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_h

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;


class Triangle:Shape
{
	double height, base, a, c;
public:
	void setHeight(double height);
	void setBase(double base);

	double getHeight();
	double getBase();

	void setSideA(double a);
	void setSideC(double c);

	double getSideA();
	double getSideC();

	void calculateArea(Triangle s);

	void calculateTriPerimeter(Triangle s);

	void displayArea();

	void displayPerimeter();
};





#endif
