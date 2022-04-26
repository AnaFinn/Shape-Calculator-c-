#include <iostream>
#include <string>
#include "Triangle.h"

using namespace std;

void Triangle::setHeight(double height)
{
	this->height = height;
}

void Triangle::setBase(double base)
{
	this->base = base;
}
double Triangle::getHeight()
{
	return this->height;
}

double Triangle::getBase()
{
	return this->base;
}

void Triangle::setSideA(double a)
{
	this->a = a;
}

void Triangle::setSideC(double c)
{
	this->c = c;
}
double Triangle::getSideA()
{
	return this->a;
}

double Triangle::getSideC()
{
	return this->c;
}

void Triangle::calculateArea(Triangle s) {
	setArea((base * height)/2);
}

void Triangle::calculateTriPerimeter(Triangle s) {
	setPerimeter(a+c+base);
}

void Triangle::displayArea()
{
	cout << "\nThis is the triangle with area: " << getArea() << endl;
}

void Triangle::displayPerimeter()
{
	cout << "\nThis is the triangle with perimeter: " << getPerimeter() << endl;
}