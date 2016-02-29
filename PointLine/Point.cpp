//
//  Point.cpp
//  Assignment: PointLine
//

#include <iostream>
using namespace std;
#include "Point.h"

Point::Point()
{
    x_cord = 0;
    y_cord = 0;
}

// contructor 을 부를때 point private variable 을 지정해줌
Point::Point(double x_new, double y_new) {
    x_cord = x_new;
    y_cord = y_new;
}

// set function
void Point::SetX(double x)
{
    x_cord = x;
}
void Point::SetY(double y)
{
    y_cord = y;
}

// accessor function
double Point::GetX()
{
    return x_cord;
}

double Point::GetY()
{
    return y_cord;
}
