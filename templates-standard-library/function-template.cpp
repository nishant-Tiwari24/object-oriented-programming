#include <iostream>
using namespace std;

template<typename T>
void concatenate(T arr1[], int n1, T arr2[], int n2) {
    cout <<"Concatenated array: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] + arr2[i] << " ";
    }
    cout << endl;
}

template<typename T>

void concatenateWithDelimiter(T s1, T s2, string delimiter) {
    cout<<"Concatenated string: "<< s1 << delimiter << s2 << endl;
}

int main() {
    int arr1[3], arr2[3];
    string s1, s2, delimiter;
    for (int i = 0; i < 3; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> arr2[i];
    }
    cin >> s1 >> s2 >> delimiter;
    concatenate<int>(arr1, 3, arr2, 3);
    concatenateWithDelimiter<string>(s1, s2, delimiter);
    return 0;
}