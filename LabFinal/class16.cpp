#include <iostream>
using namespace std;
class Employee
{
protected:
    double salary;

public:
    int id;
    Employee(int i, double s)
    {
        id = i;
        salary = s;
    }
    void display()
    {
        cout << "Employee ID:" << id << endl;
        cout << "Eempolyee salary:" << salary << endl;
    }
};
class Manager : public Employee
{
public:
    Manager(int i, double s) : Employee(i, s) {}
    void showSalary()
    {
        cout << "Manager accessing salary: " << salary << endl;
    }
};
class AssistantManager : public Manager
{
public:
    AssistantManager(int i, double s) : Manager(i, s) {}
};
int main()
{
    Manager m(1, 20.0);
    m.display();
    m.showSalary();
    AssistantManager a(2, 36.0);
    a.display();
}