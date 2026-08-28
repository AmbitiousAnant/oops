#include <iostream>
using namespace std;
class swaping
{
public:
    int a, b;
    // call by value
    void swapcov(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
        cout << a << "->" << b << endl;
    }
    // call by reference
    void swapcop(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
        cout << a << "->" << b << endl;
    }
    // call by address
    void swapcoa(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
        cout << a << "->" << b << endl;
    }
};
int main()
{
    swaping s1;
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    s1.swapcov(x, y);
    cout << "call by value: " << x << "->" << y << endl;
    s1.swapcop(x, y);
    cout << "call by reference: " << x << "->" << y << endl;
    s1.swapcoa(&x, &y);
    cout << "call by address: " << x << "->" << y << endl;
    return 0;
}