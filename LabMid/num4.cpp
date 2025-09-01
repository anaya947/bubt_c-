#include<iostream>
#include<string>
using namespace std;
class Product
{
    private:
    string ProductName;
    int ProductID;
    double Price;
    public:
    Product()
    {
        ProductName = "Unnamed";
        ProductID = 0;
        Price = 0.0;
    }
    Product(string name, int id, double price)
    {
        ProductName = name;
        ProductID = id;
        Price = price;
    }
    ~Product()
    {
        cout << "Product object destroyed. " << endl;

    }
    void setProduct(string name, int id, double price)
    {
        ProductName = name;
        ProductID = id;
        Price = price;
    }
    void DisplayDetails()
    {
        cout << "Product Name: " << ProductName << endl;
        cout << "Product ID: " << ProductID << endl;
        cout << "Price: " << Price << endl;
    }
};
int main()
{ 
    Product p;
    cout << "Default Product Information: " << endl;
    p.DisplayDetails();
    cout << "Enter new product details:" << endl;
    string name;
    int id;
    double price;
    cout << "Enter product name: ";
    getline(cin ,name);
    cout << "Enter product ID: ";
    cin >> id;
    cout << "Enter product price: ";
    cin >> price;
    p.setProduct(name, id, price);

    cout << "After modification:"<<endl;
    p.DisplayDetails();

    Product product1(name, id, price);
     cout << "Parameterized object:"<<endl;
    product1.DisplayDetails();
    return 0;
}