// Create a simple Bank Account class with a method to withdraw money.
// Throw an exception if the withdrawal amount exceeds the account balance.

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    
    BankAccount(int accountNumber, double balance, const std::string& name) :
        accountNumber(accountNumber), balance(balance), name(name) {}

    // Function to credit (deposit) money into the account
    void credit(double amount) {
        balance += amount;
        cout << "Amount " << amount << " credited to account " << accountNumber << " (" << name << ")" << endl;
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error("Insufficient balance"); 
        }
        balance -= amount;
        cout << "Amount " << amount << " withdrawn from account " << accountNumber << " (" << name << ")" << endl;
    }

private:
    int accountNumber;
    double balance;
    string name;
};

int main() {
    BankAccount account(12345, 1000.0, "Tejas");

    try {
        account.withdraw(500.0); 
        account.withdraw(600.0); 
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}