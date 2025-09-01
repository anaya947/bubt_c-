#include<iostream>
using namespace std;
class Rectangle
{
private:
 double length;
 double width;
public:
Rectangle(double l,double w)
{
    length=l;
    width=w;
}
double Area()
{
    return length*width;
}
double Perimeter()
{
    return 2*(length+width);
}
};
int main()
{
    double l,w;
    cout<<"Enter length and width of rectangle: ";
    cin>>l>>w;
    Rectangle obj(l, w);
    cout<<"Area of rectangle: "<<obj.Area()<<endl;  
    cout<<"Perimeter of rectangle: "<<obj.Perimeter()<<endl;
    return 0;

}