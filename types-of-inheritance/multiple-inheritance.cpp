#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    double a;
    double b;
    
    Triangle(double a1,double b1): a(a1) , b(b1){}
    
    double calculateArea() {
        return 0.5*a*b;
    }
};

class Hypotenuse : public Triangle {
public:
    Hypotenuse(double a2, double b2): Triangle(a2 , b2){}
    
    double Hypo() {
        return sqrt(pow(a,2) + pow(b,2));
    }
    
    double Perimeter() {
        return a + b + Hypo();
    }
};