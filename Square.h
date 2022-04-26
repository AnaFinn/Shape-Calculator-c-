#pragma once
#ifndef SQUARE_H
#define SQUARE_h

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;


class Square :Shape
{
	double side;
public:
	void setSide(double side);

	double getSide();

	void calculateArea(Square s);

	void calculateSquarePerimeter(Square s);

	void displayArea();

	void displayPerimeter();
};





#endif
