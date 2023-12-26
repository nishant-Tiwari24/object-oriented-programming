#include<iostream>
using namespace std;

class Shape {
protected:
    int l;
    int b;

public:
    Shape(int a, int b) : l(a) , b(b){}
    
    int area() {
        return l*b;
    }
    
    int perimeter() {
        return 2*(l+b);
    }
};

class Rectangle : public Shape {
protected:
    int l;
    int b;
    
public:
    Rectangle(int l, int b) : Shape(l,b){}
    void recArea() {
        cout<<"Rectangle Area: "<<area()<<endl;
        cout<<"Rectangle Perimeter: "<<perimeter()<<endl;
    }
};

class Square : public Shape {
protected:
    int a;
public:
    Square(int a) : Shape(a,a){}
    void sqArea() {
        cout<<"Square Area: "<<area()<<endl;
        cout<<"Square Perimeter: "<<perimeter()<<endl;
    }
    
};

int main() {
    int l,b,s;
    cin>>l>>b>>s;
    Rectangle r(l,b);
    Square s1(s);
    r.recArea();
    s1.sqArea();
    return 0;
}