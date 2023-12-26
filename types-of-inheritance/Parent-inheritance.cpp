#include <iostream>

class Parent {
public:
    void fun(int num) {
        int digits[10];
        int count = 0;
        int sum = 0;
        while (num > 0) {
            digits[count++] = num % 10;
            num /= 10;
        }
        for (int i = 0; i < count; ++i) {
            for (int j = i + 1; j < count; ++j) {
                sum += digits[i] + digits[j];
            }
        }

        // Displaying the final sum
        std::cout << sum << std::endl;
    }
};

class Child : public Parent {
public:
    void parentFunction(int num) {
        // Calling the fun method from the Parent class
        fun(num);
    }
};

int main() {
    int num;
    std::cin >> num;
    Child child;

    child.parentFunction(num);

    return 0;
}