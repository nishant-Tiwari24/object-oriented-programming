#include <iostream>
#include <string>

class Vehicle {
private:
    std::string registration_number;
    std::string make;
    std::string model;
    int year_of_manufacture;

public:
    Vehicle(const std::string& reg_num, const std::string& vehicle_make, const std::string& vehicle_model, int year) {
        registration_number = reg_num;
        make = vehicle_make;
        model = vehicle_model;
        year_of_manufacture = year;
    }

    void displayDetails() {
        std::cout << "Registration Number: " << registration_number << std::endl;
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year of Manufacture: " << year_of_manufacture << std::endl;
    }
};

int main() {
    std::string reg_num, make, model;
    int year;
    std::getline(std::cin, reg_num);
    std::getline(std::cin, make);
    std::getline(std::cin, model);
    std::cin >> year;
    Vehicle vehicle(reg_num, make, model, year);
    vehicle.displayDetails();

    return 0;
}