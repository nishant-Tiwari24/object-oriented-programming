#include <iostream>
#include <iomanip>

using namespace std;

class GPA {
protected:
    double gpa;

public:
    GPA(double grade) : gpa(grade) {}
};

class CreditHours {
protected:
    int creditHours;

public:
    CreditHours(int hours) : creditHours(hours) {}
};

class Attendance {
protected:
    double attendance;

public:
    Attendance(double percent) : attendance(percent) {}
};

class Student : public GPA, public CreditHours, public Attendance {
public:
    Student(double grade, int hours, double percent)
        : GPA(grade), CreditHours(hours), Attendance(percent) {}

    double calculateGradePoints() {
        double gradePoints = gpa * creditHours;
        if (attendance > 80.0) {
            gradePoints += 5.0;
        }
        return gradePoints;
    }
};

int main() {
    double gpa, attendance;
    int creditHours;
    cin >> gpa >> creditHours >> attendance;
    Student patrick(gpa, creditHours, attendance);
    cout << fixed << setprecision(1) << patrick.calculateGradePoints() << endl;

    return 0;
}
