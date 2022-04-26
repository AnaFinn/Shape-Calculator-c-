// Scenario 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include"Shape.h"
#include "Square.h"
#include"Rectangle.h"
#include"Triangle.h"
#include"Circle.h"

using namespace std;

//functions declaration
void squareCalculator();

void rectangleCalculator();

void triangleCalculator();
void circleCalculator();
void calculatorScreen(int choice);

void shapeBuilder(int choice);



int main()
{
    Square square = Square();//creating objects of a class type
    Rectangle rectangle = Rectangle();
    Triangle triangle = Triangle();
    Circle circle = Circle();

    cout << "\n\tShape Calculator" << endl;

    int ch=0;
    do
    {
        cout << "\n\t1. Square";
        cout << "\n\t2. Rectangle";
        cout << "\n\t3. Triangle";
        cout << "\n\t4. Circle";
        cout << "\n\t5. Exit";
        cout << endl;
        cin >> ch;//asking user for an input
       //if (ch == 5)
       //     break;
       calculatorScreen(ch);//calling function for a calculator screen, passing the parameter


       // for some reason this loop is linked to the amount of times calculatorScreen(ch) function called
       // I do not know how to fix it
    } 
    while (ch != 5);
    return 0;
}

void squareCalculator()
{
    Square square = Square();
    double side;
    int choice = 0;
    while (choice != 3)
    {
    cout << "\n\tSquare Calculator" << endl;
    cout << "\n\t1. Area";
    cout << "\n\t2. Perimeter";
    cout << "\n\t3. Go Back";
 
  
  
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\tPlease enter the side of the square: ";
            cin >> side;
            square.setSide(side);//accessing private verible by setter function
            square.calculateArea(square);//overloading function to calculate area
            square.displayArea();//displaying the result/overriding the function
            break;
        case 2:
            cout << "\n\tPlease enter the side of the square: ";
            cin >> side;
            square.setSide(side);
            square.calculateSquarePerimeter(square);
            square.displayPerimeter();
            break;
        case 3:
            main();
            break;
        }
    }
}

void rectangleCalculator()
{
    Rectangle rec = Rectangle();
    int choice = 0;
    double width, length;
    while (choice != 3)
    {
    cout << "\n\tRectangle Calculator" << endl;
    cout << "\n\t1. Area";
    cout << "\n\t2. Perimeter";
    cout << "\n\t3. Go Back";
  
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\tPlease enter the width of the rectangle: ";
            cin >> width;
            cout << "\n\tPlease enter the length of the rectangle: ";
            cin >> length;
            rec.setLength(length);
            rec.setWidth(width);
            rec.calculateArea(rec);

            rec.displayArea();
            break;
        case 2:
            cout << "\n\tPlease enter the width of the rectangle: ";
            cin >> width;
            cout << "\n\tPlease enter the length of the rectangle: ";
            cin >> length;
            rec.setLength(length);
            rec.setWidth(width);
            rec.calculateRecPerimeter(rec);

            rec.displayPerimeter();
            break;
        case 3:

            break;
        }
    }
}

void triangleCalculator()
{
    Triangle tri = Triangle();
    int choice = 0;
    double base, height, a, c;
    while (choice != 3)
    {
    cout << "\n\tTriangle Calculator" << endl;
    cout << "\n\t1. Area";
    cout << "\n\t2. Perimeter";
    cout << "\n\t3. Go Back";
  
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\tPlease enter the height of the triangle: ";
            cin >> height;
            tri.setHeight(height);
            cout << "\n\tPlease enter the base of the triangle: ";
            cin >> base;
            tri.setBase(base);

            tri.calculateArea(tri);

            tri.displayArea();
            break;
        case 2:
            cout << "\n\tPlease enter the side 1 of the square: ";
            cin >> a;
            tri.setSideA(a);

            cout << "\n\tPlease enter the side 2 of the triangle: ";
            cin >> base;
            tri.setBase(base);

            cout << "\n\tPlease enter the side 3 of the triangle: ";
            cin >> c;
            tri.setSideC(c);
            tri.calculateTriPerimeter(tri);

            tri.displayPerimeter();
            break;
        case 3:
            main();
            break;
        }
    }
}

void circleCalculator()
{
    Circle circle = Circle();
    int choice = 0;
    double radious;
    while (choice != 3)
    {
    cout << "\n\Circle Calculator" << endl;
    cout << "\n\t1. Area";
    cout << "\n\t2. Perimeter";
    cout << "\n\t3. Go Back\n";
   
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\tPlease enter the radious of the circle: ";
            cin >> radious;
            circle.setRadius(radious);
            circle.calculateArea(circle);

            circle.displayArea();
            break;
        case 2:
            cout << "\n\tPlease enter the radious of the circle: ";
            cin >> radious;
            circle.setRadius(radious);
            circle.calculateCirclePerimeter(circle);

            circle.displayPerimeter();
            break;
        case 3:
            main();
            break;
        }
    }
}

void calculatorScreen(int choice)
{
    switch (choice)
    {
    case 1:
        shapeBuilder(choice);
        squareCalculator();
        break;
    case 2:
        cout << endl;
        shapeBuilder(choice);
        rectangleCalculator();
        break;
    case 3:
        cout << endl;
        shapeBuilder(choice);
        triangleCalculator();
        break;
    case 4:
        cout << endl;
        shapeBuilder(choice);
        circleCalculator();
        break;
    //case 5:
    //    break;
    }
}


void shapeBuilder(int choice)
{
    switch (choice)
    {
    case 1:
        for (int i = 1; i < 10; i++)
        {
            for (int j = 1; j < 8; j++)
            {
                cout << "*  ";
            }
            cout << endl;
        }
        break;

    case 2:

        for (int i = 1; i < 5; i++)
        {
            for (int j = 1; j < 10; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 3:
        for (int i = 1, k = 0; i <= 9; ++i, k = 0)
        {
            for (int space = 1; space <= 9 - i; ++space)
            {
                cout << "  ";
            }

            while (k != 2 * i - 1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }
        break;

    case 4: 
        cout << "                    *************" << endl;
        cout << "                 *******************" << endl;
        cout << "             ***************************" << endl;
        cout << "           ******************************" << endl;
        cout << "          ********************************" << endl;
        cout << "         **********************************" << endl;
        cout << "         **********************************" << endl;
        cout << "          ********************************" << endl;
        cout << "           ******************************" << endl;
        cout << "             **************************" << endl;
        cout << "               *********************" << endl;
        cout << "                    *************" << endl;
        break;
    }
}



    