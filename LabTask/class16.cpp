#include <iostream>
#include <string>
using namespace std;
class MobilePhone
{
private:
    string brand;
    string model;
    double price;

public:
    MobilePhone()
    {
        brand = "Unknown";
        model = "Unknown";
        price = 0;
    }
    MobilePhone(string b, string m, double p)
    {
        brand = b;
        model = m;
        price = p;
        if (p < 0 || p>200000)
        {
            cout << "Warning: Invalid price." << endl;
            price = 0;
        }
        else
        {
            price = p;
        }
    }
MobilePhone(const MobilePhone &mp)
{
    brand = mp.brand;
    model = mp.model;
    price = mp.price;
}
~MobilePhone()
{
    cout <<  "MobilePhone (" << brand << ", " << model << ") destroyed." << endl;
}
void displayInfo();
void isPremiumPhone();
};
void MobilePhone::displayInfo()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
}
void MobilePhone::isPremiumPhone()
{
    if (price > 30000)
    {
        cout << "This is a premium phone." << endl;
    }
    else
    {
        cout << "This is a budget phone." << endl;
    }

}
int main()
{ cout<<"Welcome to the Mobile Phone Store!" << endl;
    MobilePhone mp3;
    mp3.displayInfo();
    string brand,modle;
    double price;
    cout << "Enter the brand of the mobile phone: ";
getline(cin, brand);
    cout << "Enter the model of the mobile phone: ";
    getline(cin, modle);
    cout << "Enter the price of the mobile phone: ";
    cin >> price;

    MobilePhone mp1(brand, modle, price);
    cout<<"Original mobile phone:" << endl;
    mp1.displayInfo();
    mp1.isPremiumPhone();
    MobilePhone mp2 = mp1; 
    cout << "Copy of mobile phone:" << endl;
    mp2.displayInfo();
    mp2.isPremiumPhone();
    MobilePhone *p;
    p=&mp1; 
    cout << "Pointer to original mobile phone:" << endl;
    p->displayInfo();
    p->isPremiumPhone();

    return 0;
}
