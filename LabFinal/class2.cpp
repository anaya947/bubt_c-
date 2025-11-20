#include<iostream>
using namespace std;
class Student
{
private:
int id;
protected:
string name;
public:
 Student(int i, string n)
 {
    id = i;
    name = n;
 }
friend class Faculty;
};
class Faculty
{
public:
void display(Student &s) 
{
cout << "ID: " << s.id << ", Name: " << s.name << endl;
}
};
int main()
{
int id;  
string n;
cout<<"Enter your ID :";
cin>>id;
cout<<"Enter your Name :";
cin>>n;
Student s(id, n);   
Faculty f1;
f1.display(s);
}