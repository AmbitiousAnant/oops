// Student Record System using Object-Oriented Programming (C++)
#include <iostream>
#include <limits>
#include <string>
using namespace std;

class StudentInfo {
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            rollNo = 0;
        }

        cout << "Enter Student Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            marks = 0;
        }
    }

    void displayData() {
        cout << "\n----- Student Record -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
        cout << "Grade       : " << calculateGrade() << endl;
    }

    string calculateGrade() const {
        if (marks >= 90)
            return "A+";
        else if (marks >= 80)
            return "A";
        else if (marks >= 70)
            return "B";
        else if (marks >= 60)
            return "C";
        else
            return "Fail";
    }
};

int main() {
    StudentInfo s1;
    s1.getData();
    s1.displayData();
    return 0;
}

 