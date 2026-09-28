#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    operator int()
    {
        return value;
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    Number n = x;

    cout << "After int to object conversion: ";
    n.display();

    int y = n;

    cout << "After object to int conversion: " << y << endl;

    return 0;
}
