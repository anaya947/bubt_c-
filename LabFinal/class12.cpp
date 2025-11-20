#include<iostream>
using namespace std;
class Merge_string
{
private:
int len;
string s;
public:
Merge_string()
{
    len=0;
    s=" ";

}
Merge_string(string str)
{
    s=str;
    len=s.length();
}
Merge_string operator+(Merge_string ms)
{
    Merge_string temp;
    temp.s=s + ms.s;
    temp.len=temp.s.length();
    return temp;
}
void display()
{
    cout<<"Merged string: "<< s <<endl; 
}
};
int main()
{
    Merge_string ms1("Good"),ms2(" Morning"),ms3;
    ms3=ms1 + ms2;
    ms3.display();
    return 0;
}

