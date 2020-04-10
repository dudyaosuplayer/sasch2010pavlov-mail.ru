#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

class Point
{
int x, y, n;
int a = 10;
public:

    Point();
    Point(int x2, int y2);
    Point(const Point &Point);
    void print() const;
    int getx () const;
    int gety () const;
    void setx (int);
    void sety (int);
    bool operator> (const Point & p) const;
    bool operator< (const Point & p) const;
    bool operator>= (const Point & p) const;
    bool operator<= (const Point & p) const;
    bool operator== (const Point & p) const;
    bool operator!= (const Point & p) const;
    Point &operator= (Point & p);
    friend ostream& operator<< (ostream &out, const Point &p);
    friend istream& operator>> (istream &in, Point &p);
    Point operator+ (const Point &p);
    Point operator- (const Point &p);
    Point &operator+= (const int n);
    Point &operator-= (const int n);
    Point &operator*= (const int n);
    Point &operator/= (const int n);
};
#endif // POINT_H_INCLUDED
