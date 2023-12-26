#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    int *a = new int;
    delete a;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    cout<<"New operator overloading"<<endl;
    for(int i=0; i<n; i++) {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    cout<<"Delete operator overloading";
}