#pragma once
#ifndef CIRCLE_H
#define CIRCLE_h

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;


class Circle :Shape
{
	double radius;
public:
	void setRadius(double radius);

	double getRadius();

	void calculateArea(Circle s);

	void calculateCirclePerimeter(Circle s);

	void displayArea();

	void displayPerimeter();
};





#endif
