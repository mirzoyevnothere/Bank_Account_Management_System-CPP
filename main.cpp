#include <iostream>
#include "BankAccount.h"

int main() {
    std::string name;
    int accountNumber;
    double amount;
    int choice;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your account number: ";
    std::cin >> accountNumber;

    // Create a bank account object
    BankAccount account(name, accountNumber);

    do {
        std::cout << "\nBank Account Management System\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. View Balance\n";
        std::cout << "4. Account Information\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter deposit amount: $";
                std::cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                std::cout << "Enter withdrawal amount: $";
                std::cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                std::cout << "Current Balance: $" << account.getBalance() << std::endl;
                break;
            case 4:
                account.displayAccountInfo();
                break;
            case 5:
                std::cout << "Thank you for using the Bank Account Management System!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
