#include <iostream>
#include <string>

class Fruit {
public:
    virtual std::string getTaste() {
        return "Generic fruit taste";
    }
};

class Apple : public Fruit {
public:
    std::string getTaste() override {
        return "Sweet";
    }
};

class Banana : public Fruit {
public:
    std::string getTaste() override {
        return "Creamy";
    }
};

class Orange : public Fruit {
public:
    std::string getTaste() override {
        return "Citrusy";
    }
};

class Grape : public Fruit {
public:
    std::string getTaste() override {
        return "Juicy";
    }
};

class Pineapple : public Fruit {
public:
    std::string getTaste() override {
        return "Tangy";
    }
};

int main() {
    int choice;

    // Input
    std::cin >> choice;

    // Create an instance of Fruit pointer
    Fruit* fruit = nullptr;

    // Based on the choice, assign the appropriate derived class
    switch (choice) {
        case 1:
            fruit = new Apple();
            break;
        case 2:
            fruit = new Banana();
            break;
        case 3:
            fruit = new Orange();
            break;
        case 4:
            fruit = new Grape();
            break;
        case 5:
            fruit = new Pineapple();
            break;
        default:
            std::cout << "Invalid choice, defaulting to generic fruit." << std::endl;
            fruit = new Fruit();
            break;
    }

    // Display result
    std::cout << "The taste of the fruit is: " << fruit->getTaste() << std::endl;

    // Release memory
    delete fruit;

    return 0;
}