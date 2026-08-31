#include <iostream>
using namespace std;
class Employee{
        static int aliveCount; //all objects in class same value
        
        public:
        Employee(){
        aliveCount++;
        cout<<"Employee Created. Currently alive: "<<aliveCount<<endl;}//construcor
        ~Employee(){
            aliveCount--;   //destructor
                cout<<"Employee destroyed. Currently alive: "<<aliveCount<<endl;
        }
};
int Employee::aliveCount = 0;
int main(){
        Employee e1;{
             Employee e2;
             Employee e3;   
        }
        cout<<"Back in MAIN() "<<endl;
}