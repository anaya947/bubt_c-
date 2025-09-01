#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    double m1,m2,m3;
public:
    void setvalue(string n,int r,double a,double b,double c)
    {
        name=n;
        roll=r;
        m1=a;
        m2=b;
        m3=c;
    }
    double total()
    {
        return (m1+m2+m3);
    }
    double average()
    {
        return total()/3;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"Total Marks:"<<total()<<endl;
        cout<<"Average Marks:"<<average()<<endl;
    }
};
int main()
{
    student s1, s2;
    s1.setvalue("Farzana",101,85,90,95);
    s2.setvalue("Farzu",102,75,80,70);

    cout<<"Student 1 Details:"<<endl;
    s1.display();
    cout<<endl;

    cout<<"Student 2 Details:"<<endl;
    s2.display();
    return 0;
}
