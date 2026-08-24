#include <iostream>
using namespace std;

class Student {
private:
    int marks;
public:
    Student(){
        marks=90;  //constructor
    }     
    friend void display(Student s); //friend function
};
void display(Student s){ 
    cout<<"Marks =" <<s.marks<<endl;    //passing by object
}
int mian(){
    Student s;
    display (s);
    return 0;
}