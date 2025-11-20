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
  friend Coord operator+(int i,Coord c);
};
Coord operator+(Coord c,int i)
{
    Coord temp;
    temp.x=c.x + i;
    temp.y=c.y + i;
    return temp;
}
Coord operator+(int i,Coord c)
{
    Coord temp;
    temp.x=c.x + i;
    temp.y=c.y + i;
    return temp;
}
int main()
{
    Coord c1(7,3),c2;
    cout<<"Addition of Coord and int: ";
    c2=c1 + 5;
    c2.display();
    cout<<"Addition of int and Coord: ";
    c2=10 + c1;
    c2.display();
    return 0;
}