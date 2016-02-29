//
//  Line.h
//  Assignment: PointLine
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
    
    // point display function
    void Show();
    
    // calculation function
    double Length();
    double Slope();
};

#endif /* Line_h */
