#include<iostream>
using namespace std;
class Varsity
{
 private:
 string name;
 protected:
 string location;
 public:
 Varsity()
 {
    name="BUBT";
    location="Mirpur, Dhaka";
 }
 friend class Department;
};
class Department
{ public:
  void Print(Varsity &v)
  {
    cout<<"Varsity Name: "<<v.name<<endl;
    cout<<"Location: "<<v.location<<endl;
  }
};
int main()
{
 Varsity v;
 Department d;
 d.Print(v);
 return 0;
}