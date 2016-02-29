//
//  Line.cpp
//  PointLine
//
//  Created by Rich Kim on 2/28/16.
//  Copyright © 2016 Rich Kim. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
#include "Line.h"
#include "Point.h"

// default constructor
Line::Line()
{
    
}

// class object constructor, set line object variable
// line object 을 initiate 하는것은 2개의 point object 을 initiate 하는것임
Line::Line(Point P1, Point P2)
{
    p_1 = P1;
    p_2 = P2;
}

// show funciton
void Line::Show()
{
    double x1, x2, y1, y2;
    x1 = p_1.GetX();
    x2 = p_2.GetX();
    y1 = p_1.GetY();
    y2 = p_2.GetY();
    
    cout << "Point 1 is (" << x1 << ", " << y1 << ")" << endl;
    cout << "Point 2 is (" << x2 << ", " << y2 << ")" << endl;
}

// calculate slope function
double Line::Slope()
{
    double x1, x2, y1, y2;
    x1 = p_1.GetX();
    x2 = p_2.GetX();
    y1 = p_1.GetY();
    y2 = p_2.GetY();
    
    return (y2 - y1)/(x2 - x1);
}

// calculate length function
double Line::Length()
{
    double x1, x2, y1, y2, xd, yd;
    x1 = p_1.GetX();
    x2 = p_2.GetX();
    y1 = p_1.GetY();
    y2 = p_2.GetY();
    
    xd = x2 - x1;
    yd = y2 - y1;
    
    // sqrt function 은 #include<math.h> 가 있어야 가능함
    return sqrt(xd*xd + yd*yd);
}