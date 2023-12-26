#include<iostream>
#include<cmath>
using namespace std;

int prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int i=2;
    while(n!=0)
    {
        if(prime(i))
        {
            cout<<i;
            cout<<" ";
            n--;
        }
        i++;
    }
}