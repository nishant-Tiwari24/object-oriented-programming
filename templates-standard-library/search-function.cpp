#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Input
    int n;
    std::cin >> n;

    std::vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> elements[i];
    }

    int target;
    std::cin >> target;

    // Use std::find to find the first occurrence of the target element
    auto it = std::find(elements.begin(), elements.end(), target);

    // Output
    if (it != elements.end()) {
        // Target element found, use std::find_if to find all occurrences
        std::cout << "Element " << target << " found at positions:";
        for (; it != elements.end(); it = std::find_if(it + 1, elements.end(), [target](int val) { return val == target; })) {
            std::cout << " " << std::distance(elements.begin(), it) + 1;
        }
        std::cout << std::endl;
    } else {
        // Target element not found
        std::cout << "Element " << target << " not found in the vector." << std::endl;
    }

    return 0;
}