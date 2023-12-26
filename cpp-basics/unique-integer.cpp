#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            break;
        }
        if(j>=n)
        count++;
    }
    cout<<count;
    return 0;
}