#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    if(a==b && b==c &&c==a) {
        cout<<"Equilateral triangle"<<endl;
    }
    else if(a==b && b!=c) {
        cout<<"Isosceles triangle"<<endl;
    }
    else if(a!=b && b==c) {
        cout<<"Isosceles triangle"<<endl;
    }
    else if(a==c && c!=b) {
        cout<<"Isosceles triangle"<<endl;
    }
    else if(a!=b && b!=c && c!=a) {
        cout<<"Scalene triangle"<<endl;
    }
}