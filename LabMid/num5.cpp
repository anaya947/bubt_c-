#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

};
int main()
{
    int x, y;
    cout << "Enter x coordinates of point: ";
    cin >> x ;
    cout << "Enter  y coordinates of point: ";
    cin >>y;
    Point p1(x, y);
    Point p = p1; // Copy constructor
   cout << "Point 1: (" << p1.getx() << ", " << p1.gety() << ")" << endl;
    cout << "Copy constructor called." << endl;
    cout << "Point 2: (" << p.getx() << ", " << p.gety() << ")" << endl;
    return 0;
}