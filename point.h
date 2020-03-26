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
    void print() const;
    int getx () const;
    int gety () const;
    void setx (int);
    void sety (int);
};




#endif // POINT_H_INCLUDED
