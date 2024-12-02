#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(std::string name, int number) {
    accountHolderName = name;
    accountNumber = number;
    balance = 0.0;  // Initial balance is 0
}

std::string BankAccount::getAccountHolderName() const {
    return accountHolderName;
}

int BankAccount::getAccountNumber() const {
    return accountNumber;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited: $" << amount << std::endl;
    } else {
        std::cout << "Invalid deposit amount." << std::endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawn: $" << amount << std::endl;
    } else {
        std::cout << "Insufficient balance or invalid amount." << std::endl;
    }
}

void BankAccount::displayAccountInfo() const {
    std::cout << "\nAccount Holder: " << accountHolderName << std::endl;
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}
