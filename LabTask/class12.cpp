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
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    int x, y;
    cout << "Enter the coordinates of the point:" << endl;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    Point p1(x, y);
    Point p = p1;
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Copy constructor called." << endl;
    cout << "Point 2: (" << p.getX() << ", " << p.getY() << ")" << endl;
    return 0;
}