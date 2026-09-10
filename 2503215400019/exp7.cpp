#include <iostream>
using namespace std;
class Student{
    private:
    int marks;
    string name;
    public:
    Student*setNaME(string name){
        this->name=name;
        return this;
    }
    Student* setMarks(int marks){
        this->marks =marks;
        return this;
    }
    void display(){
        cout<<'Name'<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int main(){
    Student s;
    s.setNaME("Anant")->setMarks(85)->display();
    return 0;
}