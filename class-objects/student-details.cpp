#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int birth_year;

public:

    Student() : name("XYZ"), birth_year(2023) {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Year born: " << birth_year << std::endl;
    }
    Student(const std::string& student_name, int student_birth_year) : name(student_name), birth_year(student_birth_year) {
        std::cout << "Name: " << "XYZ" << std::endl;
        std::cout << "Year born: " << "2023" << std::endl;
        
        std::cout << "Name: " << name << std::endl;
        std::cout << "Year born: " << birth_year << std::endl;
    }
    ~Student() {
        std::cout << "Destroyed object: " << name << std::endl;
    }
};

int main() {
    std::string name;
    int birth_year;
    std::getline(std::cin, name);
    std::cin >> birth_year;
    Student student(name, birth_year);

    return 0;
}
