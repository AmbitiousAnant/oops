#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    string name;

    Student()
    {
        age = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    Student(int a, string n)
    {
        age = a;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    Student(const Student &s)
    {
        age = s.age;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{

    cout << "Creating s1" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating s2" << endl;
    Student s2(19, "Anant");
    s2.display();

    cout << "\nCreating s3 using copy" << endl;
    Student s3(s2);
    s3.display();

    cout << "\nEnd of main" << endl;

    return 0;
}