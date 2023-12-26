#include <iostream>

class BankAccount {
private:
    int balance;

public:
    BankAccount() : balance(0) {}

    void deposit(int amount) {
        balance += amount;
        std::cout << "Deposit successful." << std::endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful." << std::endl;
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Current Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount* account = new BankAccount();

    while (true) {
        int choice;
        std::scanf("%d",&choice);

        if (choice == 1) {
            int amount;
            std::cin >> amount;
            account->deposit(amount); 
        } else if (choice == 2) {
            int amount;
            std::cin >> amount;
            (*account).withdraw(amount); 
        } else if (choice == 3) {
            account->displayBalance();
        } else if (choice == 4) {
            std::cout << "Exiting program." << std::endl;
            delete account;
            break;
        } else {
            std::cout << "Invalid choice." << std::endl;
        }
    }

    return 0;
}