#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    c3 = c1 + c2;

    cout << "\nAddition: ";
    c3.display();

    c3 = -c1;

    cout << "Unary minus of first number: ";
    c3.display();

    return 0;
}
