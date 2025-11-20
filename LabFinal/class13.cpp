#include<iostream>
using namespace std;
class Box
{
private:
    double length;
    double breadth;
    double height;
public:
    Box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    Box(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    double volume()
    {
        return length * breadth * height;
    }
    bool operator<(Box b)
    {
        if (volume() < b.volume())
            return true;
        else
            return false;
    }
    bool operator==(Box b)
    {
        if (volume() == b.volume())
            return true;
        else
            return false;
    }
    bool operator!=(Box b)
    {
    if (volume() != b.volume())
            return true;
        else
            return false;
    }
};
int main()
{
    Box box1(4.0, 2.0, 1.5);
    Box box2(4.0, 2.5, 1.0);
    if (box1 < box2)
        cout << "Box1 is smaller than Box2" << endl;
    else
        cout << "Box1 is not smaller than Box2" << endl;
    if (box1 == box2)
        cout << "Box1 is equal to Box2" << endl;
    else
        cout << "Box1 is not equal to Box2" << endl;
    if (box1 != box2)
        cout << "Box1 is not equal to Box2" << endl;
    else
        cout << "Box1 is equal to Box2" << endl;
    return 0;
}