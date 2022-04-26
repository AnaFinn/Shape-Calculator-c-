#include <iostream>
#include <string>
#include"Shape.h"

using namespace std;

void Shape::setArea(double area)
{
	this->area = area;
}

double Shape::getArea()
{
	return this->area;
}

void Shape::setPerimeter(double perimeter)
{
	this->perimeter = perimeter;
}

double Shape::getPerimeter()
{
	return this->perimeter;
}

void Shape::displayArea(Shape s)
{
	cout << "\nThis is the shape with area: " << area << endl;
}

void Shape::displayPerimeter(Shape s)
{
	cout << "\nThis is the shape with perimeter: " << perimeter << endl;
}

void calculateArea(Shape s){}