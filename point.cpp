#include "point.h"
#include <iostream>
using namespace std;
Point::Point():Point (1, 0){}

Point::Point (int x2, int y2)
{
   sety(y2);
   setx(x2);
};
Point::Point(const Point &p):Point(p.x, p.y)
{

}

void Point :: print() const
{
    cout <<"X: " << x<< " " <<"Y: " << y << endl;

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
bool Point::operator> (const Point & p) const
{
    return(x > p.x);
}

bool Point::operator< (const Point & p) const
{
    return(x < p.x);
}

bool Point::operator>= (const Point & p) const
{
    return !(*this < p);
}

bool Point::operator<= (const Point & p) const
{
    return !(*this > p);
}

bool Point::operator== (const Point & p) const
{
    return(x == p.x);
}

bool Point::operator!= (const Point & p) const
{
    return !(*this == p);
}

Point &Point::operator= (Point & p)
{
    x = NULL;
    setx(p.x);
    y = NULL;
    sety(p.y);
    return *this;
}
ostream& operator<< (ostream &out, const Point &p)
{
    out << " X: " << p.x << " Y: " << p.y;
    return out;
}
istream& operator>> (istream &in, Point &p)
{
    in >> p.y;
    in >> p.x;
    return  in;
}
Point operator+ (const Point &p, const Point &p1)
{
  Point p2;
  p2.x = p1.x + p.x;
  p2.y = p1.y + p.y;
  return p2;
}
 Point operator- (const Point &p, const Point &p1)
{
  Point p3;
  p3.x = p.x - p1.x;
  p3.y = p.y - p1.y;
  return p3;
}
Point operator+= (const Point &p, int n)
{
    Point p4;
    p4.x = p.x + n;
    p4.y = p.y + n;
    return p4;
}
Point operator-= (const Point &p, int n)
{
    Point p5;
    p5.x = p.x - n;
    p5.y = p.y - n;
    return p5;
}
Point operator*= (const Point &p, int n)
{
    Point p6;
    p6.x = p.x * n;
    p6.y = p.y * n;
    return p6;
}
Point operator/= (const Point &p, int n)
{
    Point p7;
    p7.x = p.x / n;
    p7.y = p.y / n;
    return p7;
}

