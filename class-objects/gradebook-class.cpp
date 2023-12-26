#include <iostream>
#include <string>
using namespace std;

class GradeBook {
private:
    string course_name;
    string instructor_name;

public:
    void setData(const string& course, const string& instructor) {
        course_name = course;
        instructor_name = instructor;
    }

    void displayMessage() {
        cout << "Welcome to the grade book for " << course_name << "!" << endl;
        cout << "This course is presented by: " << instructor_name << endl;
    }
};

int main() {
    string course_name, instructor_name;
    getline(cin, course_name);
    getline(cin, instructor_name);
    GradeBook gradeBook;
    gradeBook.setData(course_name, instructor_name);
    gradeBook.displayMessage();

    return 0;
}