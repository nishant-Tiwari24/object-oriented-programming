#include <iostream>
#include <string>

class Student {
public:
    int id;
    int age;
    std::string name;

    void inputStudentInfo() {
        std::cin >> id >> age;
        std::cin.ignore(); 
        std::getline(std::cin, name);
    }
    void displayStudentInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    Student student;
    student.inputStudentInfo();
    student.displayStudentInfo();
    return 0;
}