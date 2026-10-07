#include <iostream>
using namespace std;

class StudentInfo {
public:
    int rollNo;

    void showStudent() {
        cout << "Roll number: " << rollNo << endl;
    }
};

class EmployeeInfo {
public:
    int employeeId;

    void showEmployee() {
        cout << "Employee ID: " << employeeId << endl;
    }
};

class Information : public StudentInfo, public EmployeeInfo {
};

int main() {
    Information person;
    person.rollNo = 10;
    person.employeeId = 20;

    person.showStudent();
    person.showEmployee();
    return 0;
}