#include <iostream>
using namespace std;

int fun1(int num1, int num2) {
    return num1 + num2;
}

int fun1(int num1, int num2, int num3) {
    return num1 * num2 * num3;
}

int main() {
    int n;
    cin >> n;

    if (n == 2) {
        int num1, num2;
        cin >> num1 >> num2;
        cout << fun1(num1, num2) << endl;
    } else if (n == 3) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        cout << fun1(num1, num2, num3) << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}