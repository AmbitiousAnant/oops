#include <iostream> 

using namespace std; 

class Calculator 

{ 

public: 

    int add(int a, int b) 

    { 

        return a + b; 

    } 

    float add(float a, float b) 

    { 

        return a + b; 

    } 

  

    double add(double a, double b) 

    { 

        return a + b; 

    } 

}; 

int main() 

{ 

    Calculator c; 

    int a, b; 

    float x, y; 

    double p, q; 

    cout << "Enter two integers: "; 

    cin >> a >> b; 

    cout << "Result: " << c.add(a, b) << endl; 

    cout << "Enter two float values: "; 

    cin >> x >> y; 

    cout << "Result: " << c.add(x, y) << endl; 

    cout << "Enter two double values: "; 

    cin >> p >> q; 

    cout << "Result: " << c.add(p, q) << endl; 

  

    return 0; 

} 