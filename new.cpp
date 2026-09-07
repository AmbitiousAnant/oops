#include <iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    void input(){
        cout<<"Enter Roll Number";
        cin>>roll;
        cout<<"Enter Nmae";
        cin>>name;
    }
    void display(){
        cout<<"Roll Number"<<roll<<endl;
        cout<<"Name"<<name<<endl;
    }
    
}