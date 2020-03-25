#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point p;
    Point p2(p);
    p2.print();
    p.print();
    Point p1(14, 88);
    p1.print();
    p1.getx();
    cout << "get/set\n";
    cout << p1.getx() <<"\n";
    p1.gety();
    cout << p1.gety() <<"\n";

    return 0;

}
