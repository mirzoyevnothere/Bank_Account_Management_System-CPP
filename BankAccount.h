#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(std::string name, int number);

    // Getter functions
    std::string getAccountHolderName() const;
    int getAccountNumber() const;
    double getBalance() const;

    // Deposit and Withdraw functions
    void deposit(double amount);
    void withdraw(double amount);

    // Function to display account information
    void displayAccountInfo() const;
};

#endif
