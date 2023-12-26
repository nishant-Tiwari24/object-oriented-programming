#include <iostream>
#include <iomanip>

using namespace std;

class Cart {
protected:
    double price;
    int quantity;
public:
    Cart(double p, int q) : price(p), quantity(q) {}
    virtual double calculateTotal() {
        return price * quantity;
    }
};

class Kitchen : public Cart {
private:
    double discount;
public:
    Kitchen(double p, int q, double d) : Cart(p, q), discount(d) {}
    double calculateTotal() override {
        double totalPrice = price * quantity;
        totalPrice -= totalPrice * (discount / 100);
        return totalPrice;
    }
};

class Electronics : public Cart {
private:
    double serviceFees;
public:
    Electronics(double p, int q, double sf) : Cart(p, q), serviceFees(sf) {}
    double calculateTotal() override {
        return price * quantity + serviceFees;
    }
};

int main() {
    double price;
    int quantity, category;
    double discountOrServiceFees;

    cin >> price >> quantity;
    cin >> category;
    cin >> discountOrServiceFees;

    Cart* item;
    if (category == 1) {
        item = new Kitchen(price, quantity, discountOrServiceFees);
    } else if (category == 2) {
        item = new Electronics(price, quantity, discountOrServiceFees);
    } else {
        cout << "Invalid category!";
        return 0;
    }

    double totalPrice = item->calculateTotal();
    cout << fixed << setprecision(2);
    cout << totalPrice << endl;

    delete item;

    return 0;
}