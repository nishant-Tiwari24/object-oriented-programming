#include <iostream>
#include <iomanip>

class InsufficientFundsException : public std::exception {
public:
    const char* what() const throw() {
        return "Insufficient money for withdrawal";
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }

        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    double initialBalance, withdrawalAmount;
    std::cin >> initialBalance >> withdrawalAmount;

    BankAccount account(initialBalance);

    try {
        account.withdraw(withdrawalAmount);
        std::cout << "Withdrawal successful" << std::endl;
        std::cout << "New balance: " << std::fixed << std::setprecision(2) << account.getBalance() << std::endl;
    } catch (const InsufficientFundsException& e) {
        std::cout << "Exception caught: Error: " << e.what() << std::endl;
    }

    return 0;
}