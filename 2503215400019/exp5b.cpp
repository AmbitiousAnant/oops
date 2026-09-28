#include <iostream>
#include <memory>
using namespace std;

class Student
{
public:
    string name;

    Student(string n)
    {
        name = n;
        cout << "Student created: " << name << endl;
    }

    ~Student()
    {
        cout << "Student destroyed: " << name << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    unique_ptr<Student> s1 = make_unique<Student>("Shivam");

    s1->display();

    shared_ptr<Student> s2 = make_shared<Student>("Rahul");
    shared_ptr<Student> s3 = s2;

    s2->display();

    cout << "Reference Count: " << s2.use_count() << endl;

    return 0;
}
