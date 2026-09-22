#include <iostream>
using namespace std;

class Number {
    int n;
    public:
        Number(int a) {
            n = a;
        }
        void operator-() {
            n = -n;
        }
        void display() {
            cout << "value: " << n << endl;
        }
};
int main() {
    Number n(10);
    
    cout << "Before Applying" << endl;
    n.display();
    -n;  
    cout << "After Applying" << endl;
    n.display();
    return 0;
}