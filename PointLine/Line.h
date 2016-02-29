//
//  Line.h
//  PointLine
//
//  Created by Rich Kim on 2/28/16.
//  Copyright © 2016 Rich Kim. All rights reserved.
//

#ifndef Line_h
#define Line_h

#include <iostream>
using namespace std;
#include "Point.h"

// line class 에서 private variable 은 point object 임
class Line {
private:
    Point p_1, p_2;
    
public:
    Line();
    Line(Point P1, Point P2);
    
    // get function
    void Show();
    
    // calculation function
    double Length();
    double Slope();
};

#endif /* Line_h */
