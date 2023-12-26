#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int size = 2*n-1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            int distance=min(min(i,j),min(size-1-i,size-1-j));
            cout<<n-distance<<" ";
        }
        cout<<endl;
    }
    return 0;
}