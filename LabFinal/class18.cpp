#include<iostream>
using namespace std;
class A
{public:
void showA()
{
    cout<<"52 intake! Best of Luck!!"<<endl;
}
};
class C:virtual public A{};
class D: virtual public A{};
class E:public C, public D {};
int main()
{
    E a;
    a.showA();
}