#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<string>strings;
    int n;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        strings.push_back(str);
    }
    sort(strings.begin(),strings.end());
    for(const string& str:strings)
    {
        cout<<str<<endl;
    }
    return 0;
}
