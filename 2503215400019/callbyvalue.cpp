#include <iostream>
using namespace std;
void swapbyValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    
    cout << "Inside swap function : a" << a << ", b  " << b << endl;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap in main  : x  " << x << ", y  " << y << endl;
    swapbyValue(x, y);
    cout << "After swap in main   : x  " << x << ", y " << y << endl;
    
    return 0;
}