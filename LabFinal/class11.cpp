#include<iostream>
using namespace std;
class Coord
{
 private:
 int x,y;
 public:
 Coord()
 {
    x=0;
    y=0;
 }
 Coord(int a,int b)
 {
    x=a;
    y=b;
 }
  void display()
  {
    cout<<x<<","<<y<<endl;
  }
  friend Coord operator+(Coord c,int i);
  friend Coord operator*(Coord d,Coord c);
};
Coord operator+(Coord c,int i)
{
    Coord temp;
    temp.x=c.x + i;
    temp.y=c.y + i;
    return temp;
}
Coord operator*(Coord d,Coord c)
{
    Coord temp;
    temp.x=c.x * d.x;
    temp.y=c.y * d.y;
    return temp;
}
int main()
{
    Coord ob1,ob2(9,2),ob3(2,4);
    cout<<"Addition of Coord and int: ";
    ob1=(ob2 + 2)*ob3;
    ob1.display();
    return 0;
}