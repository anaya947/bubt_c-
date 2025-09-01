#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollNumber;
    double marks[3];

public:
    Student(string n, int r, double m1, double m2, double m3)
    {
        name = n;
        rollNumber = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    double TotalMarks()
    {
        return marks[0] + marks[1] + marks[2];
    }

    double AverageMarks()
    {
        return TotalMarks() / 3.0;
    }

    void DisplayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total marks:" << TotalMarks() << endl;
        cout << "Average Marks: " << AverageMarks() << endl;
    }
};
int main()
{
    string name;
    int rollNumber;
    double marks1, marks2, marks3;
    cout << "Enter 1st student name: " << endl;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks for three subjects: ";
    cin >> marks1 >> marks2 >> marks3;
    Student st1(name, rollNumber, marks1, marks2, marks3);
    cout << "Enter 2nd student name: " << endl;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks for three subjects: ";
    cin >> marks1 >> marks2 >> marks3;
    Student st2(name, rollNumber, marks1, marks2, marks3);
    st1.DisplayInfo();
    st2.DisplayInfo();
    return 0;
}