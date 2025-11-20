#include <iostream>
using namespace std;
class BankAccount {
private:
    int pin;
    double balance;
public:
    BankAccount(int p, double b) {
        pin = p;
        balance = b;
    }
    friend void ATMAccess(BankAccount acc);
};
void ATMAccess(BankAccount acc) {
    int enteredPIN;
    cout << "Enter your PIN: ";
    cin >> enteredPIN;
    if (enteredPIN == acc.pin) {
        cout << "Your current balance is: " << acc.balance << endl;
    } else {
        cout << "Incorrect PIN !" << endl;
    }
}
int main() {
    BankAccount user1(1906, 2500.75);
    ATMAccess(user1);
    return 0;
}
