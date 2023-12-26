#include <iostream>
#include <iomanip>
#include <string>

class HealthProfile {
public:
    std::string name;
    int age;
    double height;
    double weight;

    HealthProfile(std::string n, int a, double h, double w) : name(n), age(a), height(h), weight(w) {}

    double calculateBMI() {
        return weight/(height * height);
    }

    void displayProfile() {
        double bmi = calculateBMI();
        std::cout << "BMI: " << std::fixed << std::setprecision(2) << bmi << std::endl;
    }
};

int main() {
    std::string name;
    int age;
    double height, weight;

    std::getline(std::cin, name);
    std::cin >> age >> height >> weight;
    HealthProfile profile(name, age, height, weight);
    profile.displayProfile(); 

    return 0;
}