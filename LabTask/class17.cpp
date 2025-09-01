#include<iostream>
using namespace std;
struct Student
{
    string name;
    int rollNumber;
    float marks;
    Student()
    {
        name = "Jannat";
        rollNumber = 10;
        marks = 3.00;
    }
    Student(string n, int r, float m)
    {
        name = n;
        rollNumber = r;
        marks = m;
    }
};
void printStudentInfo(Student &s)
{
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: " << s.marks << endl;
}
void updateMarks(Student &s, float newMarks)
{
    s.marks = newMarks;
}
int main()
{
    Student s1;
    printStudentInfo(s1);
    
    Student s2("Muskan", 20, 3.50);
    printStudentInfo(s2);
    
    updateMarks(s2, 3.75);
    cout << "\nUpdated Marks for " << s2.name << ":" << endl;
    printStudentInfo(s2);
    
    return 0;
}

