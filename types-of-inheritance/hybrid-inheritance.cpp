#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Product {
protected:
    string name;
    double price;
    int quantity;

public:
    Product(const string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity) {}

    double calculateCost() {
        return price * quantity;
    }
};

class Electronics : public Product {
public:
    Electronics(const string& name, double price, int quantity)
        : Product(name, price, quantity) {}

    double calculateElectronicsCost() {
        if (quantity >= 3) {
            return calculateCost() * 0.9;
        } else {
            return calculateCost();
        }
    }
};

class Clothing : public Product {
public:
    Clothing(const string& name, double price, int quantity)
        : Product(name, price, quantity) {}

    double calculateClothCost() {
        if (quantity >= 5) {
            return calculateCost() * 0.95;
        } else {
            return calculateCost();
        }
    }
};

class OrderCalculator : public Electronics, public Clothing {
public:
    OrderCalculator(const string& electronicName, double electronicPrice, int electronicQuantity,
                    const string& clothName, double clothPrice, int clothQuantity)
        : Electronics(electronicName, electronicPrice, electronicQuantity),
          Clothing(clothName, clothPrice, clothQuantity) {}

    double calculateTotalCost() {
        double totalCost = calculateElectronicsCost() + calculateClothCost();
        return totalCost;
    }
};

int main() {
    string electronicName, clothName;
    double electronicPrice, clothPrice;
    int electronicQuantity, clothQuantity;

    // Input
    cin >> electronicName >> electronicPrice >> electronicQuantity;
    cin >> clothName >> clothPrice >> clothQuantity;

    // Calculate total order cost
    OrderCalculator order(electronicName, electronicPrice, electronicQuantity, clothName, clothPrice, clothQuantity);
    double totalCost = order.calculateTotalCost();

    // Output
    cout << "Total Order Cost: $" << std::fixed << std::setprecision(2) << totalCost << std::endl;

    return 0;
}