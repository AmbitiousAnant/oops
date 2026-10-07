#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
public:
    Student(int r = 0, string n = "Unknown")
    {
        roll = r;
        name = n;
    }

    void display()
    {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main()
{
    Student s1(194, "Sribendu");

    Student *p = &s1;

    cout << "Pointer to Object:" << endl;
    p->display();

    Student s[3] = {
        Student(101, "Aman"),
        Student(102, "Rahul"),
        Student(103, "Riya")
    };

    cout << "\nArray of Objects:" << endl;

    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }

    return 0;
}
