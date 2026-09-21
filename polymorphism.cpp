#include <iostream>
using namespace std;
class number
{
    private:
    int value;
    public:
    number(int v)
    {
        value=v;
    }
    number operator+(number n)
    {
        number temp(0);
        temp.value=value+n.value;
        return temp;
    }
    void display()
    {
        cout<< "value= "<<value<<endl;
    }
    
};
int main() {
    number n1(10);
    number n2(20);
    number n3= n1+n2;
    n3.display();
    return 0;
}


