#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter integer value n:";
    cin >> n;
    Point p(10, 10);
    Point p1;
    cout << "p: ";
    p.print();
    cout << "p1: ";
    p1.setx(14);
    p1.sety(11);
    p1.print();
    Point p2 = operator+ (p, p1);
    cout << " (+) " << "p2: " << p2<< "\n";
    Point p3 = operator- (p, p1);
    cout << " (-) " << "p3: " << p3 << "\n";
    Point p4 = operator+= (p, n);
    cout << " (+=)" << "p4: " << p4 << "\n";
    Point p5 = operator-= (p, n);
    cout << " (-=)" << "p5: " << p5 << "\n";
    Point p6 = operator*= (p, n);
    cout << " (*=)" << "p6: " << p6 << "\n";
    Point p7 = operator/= (p, n);
    cout << " (/=)" << "p7: " << p7 << "\n";
    if((p > p1)== true)
        cout << " (<>) " << "p > p1";
    else
        cout << " (<>) " << "p < p1 or p = p1";
    p = p1;
    cout << "\n";
    cout << " (=) ";
    cout << " p: " << p << "; " << "p1: " << p1;
    return 0;

}
