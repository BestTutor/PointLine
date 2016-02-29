//
//  Point.h
//  PointLine
//
//  Created by Rich Kim on 2/28/16.
//  Copyright © 2016 Rich Kim. All rights reserved.
//

#ifndef Point_h
#define Point_h

#include <iostream>
using namespace std;

class Point {
private:
    double x_cord, y_cord;
    
public:
    // contructor
    Point();
    Point(double x_new, double y_new);
    
    // accessor member function
    double GetX();
    double GetY();
    
    void SetX(double x);
    void SetY(double Y);
};

#endif /* Point_h */
