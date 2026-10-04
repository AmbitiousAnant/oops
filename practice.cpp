#include <iostream>
#include <string> 
using namespace std;

// Base Class
class Student {
public:
    int age;
    string name;

    void getinput() {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
    }

    virtual void setinfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    } 
}; 
class person : public Student {
public:
    int rollno;

    
    void setinfo() override { 
        cout << "Enter roll number : ";
        cin >> rollno;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll Number : " << rollno << endl;
    }
};

int main() {
    person p1;

    p1.getinput(); 
    
    cout << "\n--- Details ---" << endl;
    
    p1.setinfo();  

    return 0;
}