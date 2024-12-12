// Design a "Bank Account" class with basic credit and debit operations in C++ using Object Oriented Programming feature.

#include <iostream>
#include <string>

class BankAccount {
public:
    // Constructor to initialize account number, balance, and name
    BankAccount(int accountNumber, double balance, const std::string& name) :
        accountNumber(accountNumber), balance(balance), name(name) {}

    // Function to credit (deposit) money into the account
    void credit(double amount) {
        balance += amount;
        std::cout << "Amount " << amount << " credited to account " << accountNumber << " (" << name << ")" << std::endl;
    }

    // Function to debit (withdraw) money from the account
    void debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Amount " << amount << " debited from account " << accountNumber << " (" << name << ")" << std::endl;
        } else {
            std::cout << "Insufficient balance in account " << accountNumber << " (" << name << ")" << std::endl;
        }
    }

    // Function to display account details
    void displayAccountDetails() {
        std::cout << "Account Name: " << name << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }

private:
    int accountNumber;
    double balance;
    std::string name;
};

int main() {
    BankAccount account(12345, 1000.0, "Aspas");

    account.credit(500.0);
    account.debit(200.0);
    account.displayAccountDetails();

    return 0;
}