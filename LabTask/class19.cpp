#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int id;
    float marks;

public:
    void setvalue(string n, int i, float m)
    {
        name = n;
        id = i;
        marks = m;
    }
    void displayDetails()
    {
        cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
    }
    float getMarks()
    {
        return marks;
    }
    void display(float threshold)
    {
        if (marks > threshold)
        {
            cout << "Name: " << name << ", Marks: " << marks << endl;
        }
    }
};
int main()
{
    Student students[10];
    float totalMarks = 0;

    cout << "Enter details for 10 students:\n";
    for (int i = 0; i < 10; i++)
    {
        string name;
        int id;
        float marks;

        cout << "\nStudent " << (i + 1) << ":\n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Marks: ";
        cin >> marks;

        students[i].setvalue(name, id, marks); 
        totalMarks += marks;
    }
    float average = totalMarks / 10.0;
    cout << "\nAverage Marks of Students = " << average << endl;
    float threshold;
    cout << "\nEnter threshold marks: ";
    cin >> threshold;
    cout << "\nStudents scoring above " << threshold << ":\n";
    for (int i = 0; i < 10; i++)
    {
        students[i].display(threshold);
    }

    return 0;
}
