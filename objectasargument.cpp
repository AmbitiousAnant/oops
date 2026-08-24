#include <iostream>
using namespace std;
class student{
    public:
    int marks;
};
void display(const student&s){
    cout<<s.marks<<endl;
}
int main(){
    student s{90};
    display(s);
}
