#include<iomanip>
#include<iostream>
using namespace std;

class finalVelocity {
    private:
        float inVel, acc, tim;
    
    public:
        finalVelocity(float inVel, float acc, float tim){
            inVel = inVel;
            acc = acc;
            tim = tim;
        }

};

int main() {
    float inVel, acc, tim;
    cin>>inVel>>acc>>tim;
    
    float finalVel = inVel + (acc * tim);
    cout<<fixed<<setprecision(1)<<finalVel<<" m/s"<<endl;
}