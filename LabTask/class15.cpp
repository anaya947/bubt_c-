#include<iostream>
using namespace std;
class Square
{
    public:
    double length;
     void setlength(double l)
    {
        length = l;
  
    }
//     double CalculateArea(double l)
// {
//     return l * l;
    
// }
};
double CalculateArea(Square s)
{
    return s.length * s.length;
}

int main()
{
    cout << "Enter the length of the square: ";
    int l;
    cin >> l;
    Square s1;
     s1.setlength(l);
    cout << "Area of the square: " << CalculateArea(s1) << endl;
    return 0;
}