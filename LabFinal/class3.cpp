#include <iostream>
#include <cmath>
using namespace std;
class Point2D {
private:
    double x, y;
public:
    Point2D(double a, double b) {
        x = a;
        y = b;
    }
    void display() {
        cout << "(" << x << ", " << y << ")";
    }
    friend double calculateDistance(Point2D p1, Point2D p2);
};
double calculateDistance(Point2D p1, Point2D p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}
int main() {
    Point2D p1(3.0, 4.0);
    Point2D p2(7.0, 1.0);
    cout << "Point 1: ";
    p1.display();
    cout << "Point 2: ";
    p2.display();
    double dist = calculateDistance(p1, p2);
    cout << "Distance: " << dist << endl;
    return 0;
}
