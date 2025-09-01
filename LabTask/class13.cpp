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
    MobilePhone(string b, string m, double p)
    {
        brand = b;
        model = m;
        price = p;
    }
    MobilePhone(const MobilePhone &p)
    {
        brand = p.brand;
        model = p.model;
        price = p.price;
    }
    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
    void isPremiumPhone()
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
};
int main()
{
    string brand, model;
    double price;

    cout << "Enter mobile phone brand: ";
    getline(cin, brand);

    cout << "Enter mobile phone model: ";
    getline(cin, model);

    cout << "Enter mobile phone price: ";
    cin>>price;

    MobilePhone phone1(brand, model, price);
    phone1.displayInfo();
    phone1.isPremiumPhone();

    MobilePhone phone2 = phone1; // Copy constructor called
    cout << "Copy of the mobile phone:" << endl;
    phone2.displayInfo();
    phone2.isPremiumPhone();

    return 0;
}