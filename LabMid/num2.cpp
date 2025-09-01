
#include <iostream>
#include <string>
using namespace std;
class student
{ 
    private:
    string name;
    int roll;
    double marks[4];
    public:
    void setvalue(string n,int r,double m[])
    {
        name=n;
        roll=r;
        for(int i=0;i<4;i++)
        {
            marks[i]=m[i];
        }
    }
    double totalmarks()
{
    double sum=0;
    for(int i=0;i<4;i++)
    {
        sum=sum+marks[i];
    }
    return sum;
}
double averagemarks()
{
    return totalmarks()/4.0;
}
void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Marks: ";
    for(int i=0;i<4;i++)
    {
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    cout<<"Total Marks: "<<totalmarks()<<endl;
    cout<<"Average Marks: "<<averagemarks()<<endl;
}

};
int main()
{
    student s1,s2;
    string name;
    int roll;
    double marks[4];
    cout<<"Enter student1 name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>roll;
    cout<<"Enter marks for four subjects: ";
    for(int i=0;i<4;i++)
    {
        cin>>marks[i];
    }
    s1.setvalue(name,roll,marks);
     cout<<"Enter student2 name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>roll;
    cout<<"Enter marks for four subjects: ";
    for(int i=0;i<4;i++)
    {
        cin>>marks[i];
    }
    s2.setvalue(name,roll,marks);
    s1.display();
    s2.display();
}