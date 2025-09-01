#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Please enter any number: ";
    cin >> a;
    for(int i=1;i<=10 ;i++)
    {
        int result = a * i;
        cout<<a<<" "<<"x"<<" "<<i<<"="<<" "<< result<<endl;
    }
}