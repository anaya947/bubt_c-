#include<iostream>
using namespace std;
class Ractangle
{
private:
float length;
float width;
public:
void setvalue(float l,float w)
{
  length=l;
  width=w;
}
float calculate_area()
{
    return length*width;
}
float calculate_perimeter()
{
    return 2*(length+width);
}
};
int main()
{ float l,w;
cout<<"Enter the length and width:";
cin>>l>>w;
    Ractangle ob;
    ob.setvalue(l,w);
    cout<<"Area:"<<ob.calculate_area()<<endl;
    cout<<"Perimeter:"<<ob.calculate_perimeter()<<endl;
}