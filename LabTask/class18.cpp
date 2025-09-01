#include<iostream>
using namespace std;
class Square
{
    public:
        double length;
       void set_length(double l)
        {
            length = l; 
        }
};
double calculate_area(Square s)
{
    return s.length * s.length;
}
int main()
{
    double l;
    cout << "Enter the length: "<<endl;
    cin >> l;
    Square s1;
    s1.set_length(l);
    cout << "Area of the square: " << calculate_area(s1) << endl;
    return 0;
}
