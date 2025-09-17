#include <iostream>
using namespace std;

class Box
{
private:
    int length, width, height;

public:
    Box()
    {
        length = 10;
        width = 5;
        height = 2;
    }
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }
    friend int calculateVolume(Box b);
};
int calculateVolume(Box b)
{
    return b.length * b.width * b.height;
}

int main()
{
    Box box1;
    int l, w, h;
    cout << "Enter length, width and height for Box 2: ";
    cin >> l >> w >> h;
    Box box2(l, w, h);
    cout << "Volume of Box 1 : " << calculateVolume(box1) << endl;
    cout << "Volume of Box 2 : " << calculateVolume(box2) << endl;

    return 0;
}
