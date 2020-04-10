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
Point Point :: operator+ (const Point &p)
{
    Point p2;
    p2.x = this -> x + p.x;
    p2.y = this -> y + p.y;
    return p2;
}
 Point Point :: operator- (const Point &p)
{
    Point p3;
    p3.x = this -> x - p.x;
    p3.y = this -> y - p.y;
    return p3;
}
Point &Point :: operator+= (const int n)
{
    this-> x = this -> x + n;
    this-> y = this -> y + n;
    return *this;
}
Point &Point :: operator-= (const int n)
{
    this-> x = this -> x - n;
    this-> y = this -> y - n;
    return *this;
}
Point &Point :: operator*= (const int n)
{
    this-> x = this -> x * n;
    this-> y = this -> y * n;
    return *this;
}
Point &Point :: operator/= (const int n)
{
    this-> x = this -> x / n;
    this-> y = this -> y / n;
    return *this;
}

