#include <iostream>
using namespace std;
class Account
{
public:
    string ac_holde;
    int ac_num;
    double balance;
    Account()
    {
        ac_holde = "Unnamed";
        ac_num = 1;
        balance = 0;
    }
    Account(string h, int n, double b)
    {
        ac_holde = h;
        ac_num = n;
        balance = b;
    }
    void deposit(double m)
    {
        cout << "Deposit money : " << m << endl;
        cout << "After deposit : " << balance + m << endl;
    }
    void withdraw(double w)
    {
        cout << "Withdraw money:" << w << endl;
        cout << "After withdraw:" << balance - w << endl;
    }
    void display()
    {
        cout << "Account holder name:" << ac_holde << endl;
        cout << "Account number:" << ac_num << endl;
        cout << "Account balance:" << balance << endl;
    }
    Account operator+(Account a)
    {
        Account temp;
        temp.balance = balance + a.balance;
        return temp;
    }
    bool operator<(Account a)
    {
        if (balance < a.balance)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
};
class savingAccount : public Account
{
public:
    double interest_rate;
    savingAccount(string holder_n, int ac_number, double b, double r) : Account(holder_n, ac_number, b)
    {
        interest_rate = r;
    }

    void addInterest()
    {
        balance = balance + (balance * (interest_rate / 100));
        cout << "The balalance is : " << balance << " for interest rate " << interest_rate << "%" << endl;
    }
};
int main()
{
    Account a1("Jacky_Shroff",9090,2090),a2("Jannat_Fuzzy",17836832,20),a3;
    a3=a1+a2;
    cout<<"After adding the balalcne of two's account :"<<endl;
     a3.display();


    if(a1<a2)
    {
        cout<<"Account1's balance is less!"<<endl;
    }
    else
    {
                cout<<"Account2's balance is less!"<<endl;

    }


     cout<<"-------------"<<endl;

      a1.display();
    a1.deposit(3);
         cout<<"-------------"<<endl;

    a1.withdraw(20);
         cout<<"-------------"<<endl;



    savingAccount s("Sha_456",999,200,2);
    s.display();
    s.addInterest();
}
