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

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    friend Vector operator+(Vector v1, Vector v2);
    friend Vector operator--(Vector &v);
};
Vector operator+(Vector v1, Vector v2)
{
    Vector temp;
    temp.x = v1.x + v2.x;
    temp.y = v1.y + v2.y;
    return temp;
}
Vector operator--(Vector &v)
{
    --v.x;
    --v.y;
    return v;
}
int main()
{
    Vector v1(4, 5), v2(2, 3), v3;

    cout << "After Addition :" << endl;
    v3 = v1 + v2;
    v3.display();

    cout << "After Decrementing Vector 1 :" << endl;
    --v1;
    v1.display();

    return 0;
}
