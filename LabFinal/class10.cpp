#include<iostream>
using namespace std;
class X
{
 private:
 int x,y;
 public:
 X()
 {
    x=0;
    y=0;
 }
 X(int a,int b)
 {
    x=a;
    y=b;
 }
  void display()
  {
    cout<<x<<","<<y<<endl;
  }
  friend X operator+(int i,X c);
};
X operator+(int i, X c)
{
    X temp;
    temp.x=c.x + i;
    temp.y=c.y + i;
    return temp;
}
int main()
{
    X ob1,ob2(7,3);
    cout<<"Addition of int and Coord: ";
    ob1=45 + ob2;
    ob1.display();
    return 0;
}