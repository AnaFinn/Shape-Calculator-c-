#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

void Rectangle::setLength(double length)
{
	this->length = length;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}
double Rectangle::getLength()
{
	return this->length;
}

double Rectangle::getWidth()
{
	return this->width;
}
void Rectangle::calculateArea(Rectangle s) {
	setArea(width*length);
}

void Rectangle::calculateRecPerimeter(Rectangle s) {
	setPerimeter(2*(length+width));
}

void Rectangle::displayArea()
{
	cout << "\nThis is the rectangle with area: " << getArea() << endl;
}

void Rectangle::displayPerimeter()
{
	cout << "\nThis is the rectangle with perimeter: " << getPerimeter() << endl;
}