//
//  main.cpp
//  Assignment: PointLine
//

#include <iostream>
using namespace std;
#include "line.h"
#include "point.h"

// input function
void getPointInput(double &x, double &y);

int main() {
    char ans;
    double x1, y1, x2, y2;
    
    do
    {
        cout << "Enter Point 1 (x, y): ";
        getPointInput(x1, y1);
        // 1st point object
        Point obj_point1(x1, y1);
        
        cout << "Enter Point 2 (x, y): ";
        getPointInput(x2, y2);
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

// function: get user point 1 input
void getPointInput(double &x, double &y) {
    cin >> x >> y;
}
