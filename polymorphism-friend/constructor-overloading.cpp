#include<iostream>
using namespace std;

class Item {
    public:
        int val;
        
        
    Item (int val) {
        val = val;
    }
    
    Item operator>>(int val) {
        cin>>val;
    }
};

int main() {
    string name;
    int i;
    float price;
    int quan;
    cin>>name;
    cin>>price;
    cin>>quan;
    
    cout<<"Item details:"<<endl;
    cout<<"Name: "<<name<<", "<<"Price: "<<"$"<<price<<", "<<"Quantity: "<<quan;
}