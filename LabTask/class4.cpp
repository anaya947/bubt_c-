#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Please enter number 1: ";
    cin>>num1;
    cout<<"Please enter number 2: ";
    cin>>num2;
    cout<<"Please enter number 3: ";
    cin>>num3;
    if(num1>num2&&num1>num3)
    {cout<<"The largesr number is:"<<num1<<endl;
    }
    else if (num2>num1&&num2>num3)
    {
        cout <<"The largest number is:"<<num2<<endl;
    }
    else
    {
       cout <<"The largest number is:"<<num3<<endl; 
    }
    return 0;

}