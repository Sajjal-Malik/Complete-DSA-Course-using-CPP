#include<bits/stdc++.h>
using namespace std;

// Class to represent a simple bank account
class BankAccount {
private:
    int balance;  // hidden data

public:
    // Constructor
    BankAccount(int initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Public method to deposit money
    void deposit(int amount) {
        if (amount > 0)
            balance += amount;
    }

    // Public method to withdraw money
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    // Public method to check balance
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(1000);  // Create an account with 1000

    myAccount.deposit(500);       // Deposit money
    myAccount.withdraw(200);      // Withdraw money

    cout << "Current balance: " << myAccount.getBalance() << endl;

    return 0;
}