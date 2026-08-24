#include <iostream>
using namespace std;
class Student{
    private:
    int id;
    public:
    void getter(int x) {
        id=x;
    }
    void show(){
        cout<<"ID:"<<id;
    }
};
int main(){
    Student s;
    s.getter(3);
    s.show();
}