#include <iostream>
#include <iomanip>
using namespace std;

float calculateTotalPrice(float price) {
    return price;
}

float calculateTotalPrice(float price, int quantity) {
    return price * quantity;
}

float calculateTotalPrice(float price, int quantity, float discountPercentage) {
    float discountedPrice = price * quantity * (1 - discountPercentage / 100);
    return discountedPrice;
}

int main() {
    int choice;
    while (true) {
        cin >> choice;
        if (choice == 4) {
            break; 
        }

        float price;
        int quantity;
        float discountPercentage;

        if (choice == 1) {
            cin >> price;
            cout << fixed << setprecision(2) << calculateTotalPrice(price) << endl;
        } else if (choice == 2) {
            cin >> price >> quantity;
            cout << fixed << setprecision(2) << calculateTotalPrice(price, quantity) << endl;
        } else if (choice == 3) {
            cin >> price >> quantity >> discountPercentage;
            cout << fixed << setprecision(2) << calculateTotalPrice(price, quantity, discountPercentage) << endl;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}