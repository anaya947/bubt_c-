#include<iostream>
using namespace std;
class Overloding
{
  private:
  float radiud;
  int length, width; 
  float base, height;
  public:
  Overloding(float r)
  {
    radiud = r;
  }
  Overloding(int l, int w)
  {
    length = l;
    width = w;
  }
  Overloding(float b, float h)
  {
    base = b;
    height = h;
  }
  float AreaCircle()
  {
    return 3.14 * radiud * radiud;
  }
  int AreaRectangle()
  {
    return length * width;
  }
  float AreaTriangle()
  {
    return 0.5 * base * height;
  } 
};
int main()
{
    Overloding c(7);
    cout<<"Area of circle: "<<c.AreaCircle()<<endl;
    Overloding r(8,4);
    cout<<"Area of rectangle: "<<r.AreaRectangle()<<endl;
    Overloding t(6.0f,3.0f);
    cout<<"Area of triangle: "<<t.AreaTriangle()<<endl;
}

