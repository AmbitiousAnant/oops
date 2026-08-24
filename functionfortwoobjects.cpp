#include <iostream>
using namespace std;

class Number{
private:
    int values;
public:
    Number(int v){
        values=v;
    }

    void display(){
        cout<<values<<endl;
    }

    friend Number add(Number n1, Number n2);
};

Number add(Number n1, Number n2){
    return Number(n1.values + n2.values);
}

int add(int first, int second){
    return first + second;
}

int main(){
    Number number1(10);
    Number number2(20);
    Number result=add(number1, number2);

    cout<<"Sum of two Number objects: ";
    result.display();
    cout<<"Sum of two integers: "<<add(15, 25)<<endl;

    return 0;
}
