#include <iostream>
using namespace std;
class Student
{
public:
string s_name;
int s_id;
Student(string sn,int si)
{
    s_name=sn;
    s_id=si;
}
};
class Course
{
    public:
     string c_name;
     string c_code;
     Course(string cn,string cd)
     {
        c_name=cn;
        c_code=cd;
     }

};
class University
{
    public:
     string u_name;
     string u_add;
     University(string un,string ua)
     {
        u_name=un;
        u_add=ua;
     }

};
class Enrollment:public Student,public Course,public University
{
public:
 string enrollment_date;
    Enrollment(string sn,int si,string cn,string cd,string un,string ua,string date):Student( sn, si),Course(cn,cd),University(un,ua)
   {
     enrollment_date = date;
   }
   void printDetails()
   {
    cout<<"Student name      :"<< s_name<<endl;
    cout<<"Student ID        :"<< s_id<<endl;
    cout<<"Course name       :"<< c_name<<endl;
    cout<<"Course ID         :"<< c_code<<endl;
    cout<<"University  name  :"<< u_name<<endl;
    cout<<"University addrese:"<< u_add<<endl;
    cout <<"Enrollment Date   :" << enrollment_date << endl;
   }
};
int main()
{
   Enrollment e("Muskan",12,"CSE","101","BUBT","Mirpur","01,01,2025");
   e.printDetails();
}



