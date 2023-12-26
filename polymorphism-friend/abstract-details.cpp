#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;
    int marks;
    Student() : name(""), age(0), marks(0) {}
    Student(string n, int a, int m) : name(n), age(a), marks(m) {}
};

int main() {
    int n;
    cin >> n;
    Student best_student;
    
    for (int i = 0; i < n; i++) {
        string name;
        int age, marks;
        cin >> name >> age >> marks;
        Student current_student(name, age, marks);

        if (current_student.marks > best_student.marks) {
            best_student = current_student;
        }
    }

    cout << best_student.name << " " << best_student.age << " " << best_student.marks << endl;

    return 0;
}