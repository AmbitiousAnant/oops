#include <iostream>
using namespace std;

class Student
{
    int roll;
    static int count;

public:
    Student(int r)
    {
        roll = r;
        count++;
    }

    static void displayCount()
    {
        cout << "Total Students: " << count << endl;
    }

    friend void displayRoll(Student s);
};

int Student::count = 0;

void displayRoll(Student s)
{
    cout << "Roll Number: " << s.roll << endl;
}

int main()
{
    Student s1(172);
    Student s2(173);
    Student s3(174);

    Student::displayCount();

    displayRoll(s1);
    displayRoll(s2);
    displayRoll(s3);

    return 0;
}
