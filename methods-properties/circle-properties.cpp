#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double getDiameter(double radius) {
    float diameter = 2*radius;
    return diameter;
}

double getCircumfrence(double radius) {
    float circumfrence = 2*(M_PI)*radius;
    return circumfrence;
}

double getArea(double radius) {
    float area = (M_PI)*radius*radius;
    return area;
}

int main() {
    float r;
    cin>>r;
    cout<<fixed;
    cout<<setprecision(2)<<getDiameter(r)<<endl;
    cout<<setprecision(2)<<getCircumfrence(r)<<endl;
    cout<<setprecision(2)<<getArea(r)<<endl;
    
return 0;
}