#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char op;
    cout<<"Please enter num1:"<<endl;
    cin>>num1;
    cout<<"Please enter num2:"<<endl;
    cin>>num2;
    cout<<"Please enter operator(+,-,*,/):"<<endl;
    cin>>op;
    if(op=='+')
    {
        cout<< num1+num2<<endl;
    }
    else if (op=='-')
    {
        cout<<num1-num2<<endl;
    }
    else if (op=='*')
    {
       cout<<num1*num2<<endl;
    }
    else if(op=='/')  
    {
        
        cout<<num1/num2<<endl;
    }
    else
    {
        cout<<"Invalid operator!"<<endl;
    }

    return 0;


}