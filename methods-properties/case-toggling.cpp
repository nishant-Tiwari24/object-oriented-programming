#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]=tolower(str[i]);
        else if(str[i]>='a' && str[i]<='z')
        str[i]=toupper(str[i]);
    }
    cout<<"Toggled string: "<<str<<endl;
    return 0;
}
