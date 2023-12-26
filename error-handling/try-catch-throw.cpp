#include <iostream>
#include <stdexcept>

double calculate_result(int index, double numerator, double denominator) {
    try {
        double results[4] = {0.0};
        if (index < 0 || index >= 4) {
            std::cout<<"Error: Array out of bounds!"<<std::endl;
        }
        if (denominator == 0.0) {
            std::cout<<"Error: Cannot divide by 0"<<std::endl;
        }
        results[index] = numerator / denominator;
        return results[index];

    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
}

int main() {
    try {
        // Input
        int index;
        std::cin >> index;

        double numerator, denominator;
        std::cin >> numerator >> denominator;

        // Check if the denominator is greater than zero
        if (denominator <= 0.00) {
            throw std::invalid_argument("Error: Denominator must be greater than 0");
        }

        // Output the result or error message
        std::cout << calculate_result(index, numerator, denominator) << std::endl;

    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}