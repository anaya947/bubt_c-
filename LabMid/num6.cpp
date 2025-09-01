#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;
    double marks;

public:
    void setData(string n, int i, double m) {
        name = n;
        id = i;
        marks = m;
    }

    double getMarks() {
        return marks;
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s[2];
    double sum = 0;

    for(int i=0; i<2; i++) {
        string name;
        int id;
        double marks;
        cout << "Enter Name, ID, Marks for student " << i+1 << ": ";
        cin >> name >> id >> marks;
        s[i].setData(name, id, marks);
        sum += marks;
    }

    cout << "Average Marks = " << (sum/2.0) << endl;
    double threshold;
    cout << "Enter threshold marks: " << threshold << endl;
    cin >> threshold;
    cout << "Students above threshold:" << endl;
    for(int i=0; i<2; i++) {
        if(s[i].getMarks() > threshold) {
            s[i].display();
        }
    }

    return 0;
}
