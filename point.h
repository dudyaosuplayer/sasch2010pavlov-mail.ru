#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
    int y;
    int x;


public:
    Point();
    Point(int x2, int y2);
    Point(const Point &p);
    void print();
    int getx ();
    int gety ();
    void setx (int);
    void sety (int);
};




#endif // POINT_H_INCLUDED
