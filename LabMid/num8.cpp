// #include<iostream>
// using namespace std;

// class Distance {
// public:
//     int feet;
//     int inches;
// };
// Distance addDistance(Distance d1, Distance d2) {
//     Distance result;
//     result.feet = d1.feet + d2.feet;
//     result.inches = d1.inches + d2.inches;

//     // Convert inches to feet if ≥ 12
//     if (result.inches >= 12) {
//         result.feet= result.feet+result.inches / 12;
//         result.inches = result.inches % 12;
//     }

//     return result;
// }

// int main() {
//     Distance d1, d2, sum;

//     cout << "Enter feet and inches for first distance: ";
//     cin >> d1.feet >> d1.inches;

//     cout << "Enter feet and inches for second distance: ";
//     cin >> d2.feet >> d2.inches;

//     sum = addDistance(d1, d2);

//     cout << "Total Distance: " << sum.feet << " feet " << sum.inches << " inches" << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
void setDistance(int f, int i)
{
    feet = f;
    inches = i;
}

void
display()
{
    cout << feet << " feet " << inches << " inches" << endl;
}

// friend function declare
friend Distance addDistance(Distance d1, Distance d2);
}
;

// Friend function definition
Distance addDistance(Distance d1, Distance d2)
{
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12)
    {
        result.feet += result.inches / 12;
        result.inches %= 12;
    }
    return result;
}

int main()
{
    Distance d1, d2, sum;
    int f, i;

    cout << "Enter feet and inches for first distance: ";
    cin >> f >> i;
    d1.setDistance(f, i);

    cout << "Enter feet and inches for second distance: ";
    cin >> f >> i;
    d2.setDistance(f, i);
    
        sum = addDistance(d1, d2);

    cout << "Total Distance: ";
    sum.display();

    return 0;
}
