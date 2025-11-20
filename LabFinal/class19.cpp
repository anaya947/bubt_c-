#include <iostream>
using namespace std;
class Shape
{
public:
    float radius;
    void inputRadius()
    {
        cout<<"Enter radius:";
        cin>>radius;
    }
};
class Circle : public Shape
{
public:
    float cal_area()
    {
        return 3.1416 * radius * radius;
    }
    void circle_display()
    {
        cout << "Area of circle:" << cal_area() << endl;
    }
};
class Cylinder : public Circle
{
public:
    float hight;
    void inputHeight()
    {
        cout<<"Enter height:";
        cin>>hight;
    }
    float volum()
    {
        return cal_area() * hight;
    }
    float surface()
    {
        return 2 * 3.1416 * radius * (radius + hight);
    }
    void cylinderDisplay()
    {
        cout << "Volum of cylinder:" << volum() << endl;
        cout << "Surface of cylinder:" << surface() << endl;
    }
};
int main()
{
    Cylinder c;
    c.inputRadius();
    c.inputHeight();
    c.circle_display();
    c.cylinderDisplay();
}