#include <iostream>
using namespace std;
class Account
{
protected:
    double balance;
public:
    int acc_no;
    Account(int acn, double b)
    {
        acc_no = acn;
        balance = b;
    }
    void display()
    {
        cout << "Account no:" << acc_no << endl;
    }
};
class Account_holder : public Account
{
public:
    Account_holder(int acn, double b) : Account(acn, b)
    {}
        void showBalance()
    {
        cout << "Son accessing balance: " << balance << endl;
    }
};
class Son : public Account_holder
{
public:
    Son(int acn, double b) : Account_holder(acn, b)
    {
    }
};
int main()
{ Account ac(1,20.0);
ac.display();
Account_holder a(2,28.0);
a.display();
a.showBalance();
Son s(3,30.0);
s.display();
}
