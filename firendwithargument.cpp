#include <iostream>
using namespace std;

class Employee {
private:
    int salary;
public:
    Employee(int s){
        salary=s;
    }
    void display(){
        cout<<"Monthly salary: "<<salary<<endl;
    }
    int annualSalary(){
        return salary * 12;
    }
    friend void compare(Employee e1,Employee e2);
};
void compare(Employee e1, Employee e2){
    if(e1.salary > e2.salary)
    cout<<"Employee 1 has a higher salary";
    else if(e2.salary>e1.salary)
    cout<<"Employee 2 has a higher salary";
    else
    cout<<"Both employees have equal salaries";
}
int main(){
    Employee e1(30000);
    Employee e2(42000);

    e1.display();
    cout<<"Annual salary: "<<e1.annualSalary()<<endl;
    e2.display();
    cout<<"Annual salary: "<<e2.annualSalary()<<endl;
    compare(e1,e2);
    return 0;
}