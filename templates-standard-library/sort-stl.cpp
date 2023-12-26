// You are using GCC
#include <iostream>
#include <algorithm>

int main() {
    // Input
    int n;
    std::cin >> n;

    int sequence[10];  // Assuming a maximum size of 10 as per the code constraint
    for (int i = 0; i < n; ++i) {
        std::cin >> sequence[i];
    }

    int k;
    std::cin >> k;

    // Sorting the sequence in descending order
    std::sort(sequence, sequence + n, std::greater<int>());

    // Output
    if (k >= 1 && k <= n) {
        std::cout << "The kth largest element is: " << sequence[k - 1] << std::endl;
    } else {
        std::cout << "Invalid value of k" << std::endl;
    }

    return 0;
}
