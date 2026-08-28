#include <iostream>
using namespace std;

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap in main  : x = " << x << ", y = " << y << endl;
    swapByAddress(&x, &y);
    cout << "After swap in main   : x = " << x << ", y = " << y << endl;
    return 0;
}
