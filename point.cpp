#include "point.h"
#include <iostream>
using namespace std;
Point::Point():Point (1, 0){}

Point::Point (int x2, int y2)
{
   sety(y2);
   setx(x2);
};
Point::Point(const Point &p):Point(p.x, p.y){}

void Point :: print() const
{
    cout <<endl <<"X: " << x << endl <<"Y: " << y <<endl;

}

void Point :: setx(int x2)
{
    x = x2;
}

void Point :: sety (int y2)
{
    y = y2;

}
int Point :: getx() const
{
    return x;
}
int Point :: gety() const
{
    return y;
}
