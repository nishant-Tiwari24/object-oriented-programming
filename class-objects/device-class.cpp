#include <iostream>
using namespace std;

class Device;

class Device {
private:
    int age;
    int resting_heart_rate_awake;

public:
    Device(int a, int rhr_awake) : age(a), resting_heart_rate_awake(rhr_awake) {}

    friend void calculateHeartRates(Device& d);
};

void calculateHeartRates(Device& d) {
    int mhr = 220 - d.age;
    int rhr_sleep = 0.9 * d.resting_heart_rate_awake;

    cout << "MHR: " << mhr << " bpm" << endl;
    cout << "RHR_sleep: " << rhr_sleep << " bpm" << endl;
}

int main() {
    int age, rhr_awake;
    cin >> age >> rhr_awake;
    Device device(age, rhr_awake);
    calculateHeartRates(device);

    return 0;
}