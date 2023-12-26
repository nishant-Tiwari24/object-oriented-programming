#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    float od1,od2;
    cin>>od1>>od2;
    float distance = (od2-od1);
    float remuneration = (round(distance*25)*10)/10;
    cout<<fixed<<setprecision(2)<<distance<<" "<<remuneration<<endl;
    
}