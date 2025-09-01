#include<iostream>
using namespace std;
class Circle
{
private:
 double radius;
 
public:
Circle(double r)
{
    radius = r;

}
double Area()
{
    return 3.14 * radius * radius;
}
double Circumference()
{
    return 2 * 3.14 * radius;
}
};
int main()
{
    double r;
    cout<<"Enter radius of circle: ";
    cin>>r;
   Circle obj(r);
//    obj.Area();
//    obj.Circumference();
    cout<<"Area of circle : "<<obj.Area()<<endl;  
    cout<<"Circumference of circle : "<<obj.Circumference()<<endl;
    return 0;

}