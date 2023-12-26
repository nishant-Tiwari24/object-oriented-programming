#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
struct pop{
    string str;
    int n;
    struct pop *next;
};

int z;
int *e=&z;

int main() {
    int a=3;
    struct pop *temp,*head=0,*ptr;
    for(int i=0;i<a;i++) {
        ptr=new struct pop;
        cin>>ptr->str;
        cin>>ptr->n;
        if(head==0)
        {
            head=temp=ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
        }
    }
    float b=0;
    temp=head;
    for(int i=0;i<a;i++) {
        b=b+temp->n;
        temp=temp->next;
    }
    cout<<b<<endl;
    double c;
    c=b/3;
    cout<<fixed;
    cout<<setprecision(2)<<c;
}