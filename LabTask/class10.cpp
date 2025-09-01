#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int publicationYear;

public:
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        publicationYear = 0;
    }

    ~Book()
    {
        cout << "Book object destroyed. " << title << endl;
    }
    void setdetails(string t, string a, int year)
    {
        title = t;
        author = a;
        publicationYear = year;
        if (year > 2025)
        {
            cout << "Warning: Input is invalid!" << endl;
            publicationYear = 0;
        }
        else
        {
            cout << "Book object created. " << title << endl;
        }
    }
    void displayInfo()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};
int main()
{
    Book book2;
    cout << "Default Book Information: " << endl;
    book2.displayInfo();
    cout << "Enter new book details:" << endl;
    string title, author;
    int year;

    cout << "Enter book title: ";
    getline(cin, title);

    cout << "Enter book author: ";
    getline(cin, author);

    cout << "Enter publication year: ";
    cin >> year;

    Book book1;
    book1.setdetails(title, author, year);
    book1.displayInfo();
    Book book3;
    book3.displayInfo();
    return 0;
}