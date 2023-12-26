#include <iostream>
#include <iomanip>
using namespace std;

class Circle {
protected:
    double radius;

public:
    Circle(double r) : radius(r) {}
    virtual double calculateCircumference() = 0;
};

class Class1 : public Circle {
public:
    Class1(double r) : Circle(r) {}
    double calculateCircumference() override {
        return 2 * 3.14159 * radius;
    }
};

class Class2 : public Circle {
public:
    Class2(double r) : Circle(r) {}
    double calculateCircumference() override {
        return 23.14 * radius;
    }
};

int main() {
    double radius;
    cin >> radius;
    Class1 obj1(radius);
    Class2 obj2(radius);

    cout << "Class 1: " << fixed << setprecision(2) << obj1.calculateCircumference() << endl;
    cout << "Class 2: " << fixed << setprecision(2) << obj2.calculateCircumference() << endl;

    return 0;
}