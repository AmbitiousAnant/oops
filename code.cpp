#include <iostream>
using namespace std;

class Student {
public:
    static int totalStudents;

    Student() {
        totalStudents++;
    }
};
int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3;

    cout << "Total Students: " << Student::totalStudents << endl;

    return 0;
}