#include <iostream>
#include <string>
#include"Circle.h"

using namespace std;

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::getRadius()
{
	return this->radius;
}

void Circle::calculateArea(Circle s) {
	setArea(3.14*pow(radius,2));
}

void Circle::calculateCirclePerimeter(Circle s) {
	setPerimeter(2*3.14*radius);
}

void Circle::displayArea()
{
	cout << "\nThis is the circle with area: " << getArea() << endl;
}

void Circle::displayPerimeter()
{
	cout << "\nThis is the circle with perimeter: " << getPerimeter() << endl;
}