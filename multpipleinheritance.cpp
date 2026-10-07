#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;

    void showName() {
        cout << "Name: " << name << endl;
    }
};

class StudentInfo : public Person {
public:
    int rollNo;

    void showStudent() {
        showName();
        cout << "Roll number: " << rollNo << endl;
    }
};

class EmployeeInfo : public Person {
public:
    int employeeId;

    void showEmployee() {
        showName();
        cout << "Employee ID: " << employeeId << endl;
    }
};

int main() {
    StudentInfo student;
    student.name = "Anant";
    student.rollNo = 10;
    student.showStudent();

    EmployeeInfo employee;
    employee.name = "Rahul";
    employee.employeeId = 20;
    employee.showEmployee();
    return 0;
}
