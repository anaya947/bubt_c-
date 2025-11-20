#include <iostream>
using namespace std;
class Vector
{
private:
    int x, y;

public:
    Vector()
    {
        x = 0;
        y = 0;
    }
    Vector(int a, int b)
    {
        x = a;
        y = b;
    }
    Vector operator+(Vector v)
    {
        Vector temp;
        temp.x = x + v.x;
        temp.y = y + v.y;
        return temp;
    }
    Vector operator-(Vector v)
    {
        Vector temp;
        temp.x = x - v.x;
        temp.y = y - v.y;
        return temp;
    }
    bool operator==(Vector v)
    {
        return (x == v.x && y == v.y);
    }
    Vector operator-()
    {
        x = -x;
        y = -y;
        return (*this);
    }
    void display()
    {
        cout << x << "," << y << endl;
    }
    friend int operator*(Vector v1, Vector v2);
};
int operator*(Vector v1, Vector v2)
{
    return (v1.x * v2.x + v1.y * v2.y);
}
int main()
{
    Vector v1(2, 3), v2(5, 6), v3;
    cout << "Summation of vectors: ";
    v3 = v1 + v2;
    v3.display();
    cout << "Subtraction of vectors: ";
    v3 = v1 - v2;
    v3.display();
    cout << "Checking equality of v1 and v2: ";
    if (v1 == v2)
        cout << "Vectors are equal!" << endl;
    else
        cout << "Vectors are not equal!" << endl;
    cout << "Dot product of v1 and v2: " << (v1 * v2) << endl;
    cout << "Negation of v1: ";
    -v1;
    v1.display();
    return 0;
}
