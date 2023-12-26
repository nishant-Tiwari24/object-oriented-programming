#include <iostream>
#include <vector>
#include <iomanip>

class MenuItem {
protected:
    double price;

public:
    MenuItem(double p) : price(p) {}

    virtual double calculatePrice(int persons) = 0;
};

class Appetizer : public MenuItem {
public:
    Appetizer(double p) : MenuItem(p) {}

    double calculatePrice(int persons) override {
        return price * persons;
    }
};

class MainCourse : public MenuItem {
public:
    MainCourse(double p) : MenuItem(p) {}

    double calculatePrice(int persons) override {
        return price * persons;
    }
};

int main() {
    int numPersons, numAppetizers, numMainCourses;
    std::cin >> numPersons >> numAppetizers >> numMainCourses;

    std::vector<double> appetizerPrices(numAppetizers);
    std::vector<double> mainCoursePrices(numMainCourses);

    for (int i = 0; i < numAppetizers; ++i) {
        std::cin >> appetizerPrices[i];
    }

    for (int i = 0; i < numMainCourses; ++i) {
        std::cin >> mainCoursePrices[i];
    }

    double totalCost = 0;

    for (int i = 0; i < numAppetizers; ++i) {
        Appetizer appetizer(appetizerPrices[i]);
        totalCost += appetizer.calculatePrice(numPersons);
    }

    for (int i = 0; i < numMainCourses; ++i) {
        MainCourse mainCourse(mainCoursePrices[i]);
        totalCost += mainCourse.calculatePrice(numPersons);
    }

    std::cout << "Rs. " << std::fixed << std::setprecision(2) << totalCost << std::endl;

    return 0;
}