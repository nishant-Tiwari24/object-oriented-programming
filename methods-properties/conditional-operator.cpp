#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string result  = (n%2==0) ? "Even" : "Odd";
    cout<<result<<endl;
}