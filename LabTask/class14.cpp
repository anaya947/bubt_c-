#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string Name;
    int RollNumber;
    float Marks;
    Student()
    {
        Name = " Farzana";
        RollNumber = 60;
        Marks = 3.00;
    }
    Student(string n, int r, float m)
    {
        Name = n;
        RollNumber = r;
        Marks = m;
    }
    
};
void PrintStudentInfo(Student &s)
{
    cout << "Name:" << s.Name << endl;
    cout << "RollNumber:" << s.RollNumber << endl;
    cout << "Marks:" << s.Marks << endl;
}
void UpdateMarks(Student &s, float newMarks)
{
    s.Marks = newMarks;
}
int main()
{
    Student s1;
    Student s2("Muskan", 136, 3.29);
    cout << "Initial Info" << endl;
    PrintStudentInfo(s1);
    PrintStudentInfo(s2);
    UpdateMarks(s2, 3.67);
    cout << "After updating marks" << endl;

    PrintStudentInfo(s2);
}
