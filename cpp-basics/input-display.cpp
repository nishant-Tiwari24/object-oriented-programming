#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct input {
    string name;
    int weight;
};

bool compInput(const input &a, const input &b) {
    return a.weight < b.weight;
}

int main() {
    int n;
    cin>>n;
    vector<input> inputs(n);
    for(int i=0; i<n; ++i) {
        cin>>inputs[i].name>>inputs[i].weight;
    }
    
    sort(inputs.begin(),inputs.end(),compInput);
    
    for(const input &p: inputs) {
        cout<<p.name<<" "<<p.weight<<endl;
    }
    return 0;
}