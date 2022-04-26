#include <iostream>
#include <string>
#include"Square.h"

using namespace std;

void Square:: setSide(double side)
{
	this->side = side;
}

double Square::getSide()
{
	return this->side;
}

void Square::calculateArea(Square s) {
	setArea(pow(side, 2));
}

void Square::calculateSquarePerimeter(Square s) {
	setPerimeter(4 * side);
}

void Square::displayArea()
{
	cout << "\nThis is the square with area: " << getArea() << endl;
}

void Square::displayPerimeter()
{
	cout << "\nThis is the square with perimeter: " << getPerimeter() << endl;
}