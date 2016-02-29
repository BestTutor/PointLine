//
//  main.cpp
//  PointLine
//
//  Created by Rich Kim on 2/28/16.
//  Copyright © 2016 Rich Kim. All rights reserved.
//

#include <iostream>
using namespace std;
#include "line.h"
#include "point.h"

// input function
void getUserInput1(double &x1, double &y1);
void getUserInput2(double &x2, double &y2);

int main() {
    char ans;
    double x1, y1, x2, y2;
    
    do
    {
        cout << "Enter Point 1 (x, y): ";
        getUserInput1(x1, y1);
        // 1st point object
        Point obj_point1(x1, y1);
        
        cout << "Enter Point 2 (x, y): ";
        getUserInput2(x2, y2);
        // 2nd point object
        Point obj_point2(x2, y2);
        
        // 2개의 point object 을 line object 으로 initiate 함
        Line obj_line(obj_point1, obj_point2);
        obj_line.Show();
        cout << "Lengh of two points is: " << obj_line.Length() << endl;
        cout << "Slope of tow points is: " << obj_line.Slope() << endl;
        
        cout << endl << "Test again? (Type y for yes or n for no): ";
        cin >> ans;
        cout << endl;
    } while(ans == 'y' || ans == 'Y');
    
    return 0;
}

// function: get user choices key stroke
void getUserInput1(double &x1, double &y1) {
    cin >> x1 >> y1;
}

void getUserInput2(double &x2, double &y2) {
    cin >> x2 >> y2;
}
