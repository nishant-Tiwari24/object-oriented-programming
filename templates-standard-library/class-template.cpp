#include <iostream>
using namespace std;

template <class T>
class OddEvenPrinter {
public:
    void printOdd(T arr[], int n) {
        for (int i = 1; i < n; i += 2) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    int arr[n];
    string str[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    OddEvenPrinter<int> intPrinter;
    intPrinter.printOdd(arr, n);
    OddEvenPrinter<string> strPrinter;
    strPrinter.printOdd(str, n);
    return 0;
}