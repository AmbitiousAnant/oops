#include <iostream>
using namespace std;
// Inline function for integer addition
inline int add(int a, int b) {
    return a + b;
}
// Overloaded inline function for double addition
inline double add(double a, double b) {
    return a + b;
}
// Inline function with default argument for subtraction
inline int subtract(int a, int b = 0) {
    return a - b;
}
// Overloaded inline function with default argument for double subtraction
inline double subtract(double a, double b = 0.0) {
    return a - b;
}
// Inline function with default argument for multiplication
inline double multiply(double a, double b = 1.0) {
    return a * b;
}
// Inline function with default argument for division
inline double divide(double a, double b = 1.0) {
    return a / b;
}
int main() {
    cout << "Demonstrating inline functions, default arguments, and function overloading\n";
    cout << "---------------------------------------------------------------\n";
    cout << "Integer addition: " << add(5, 3) << endl;
    cout << "Double addition: " << add(2.5, 3.5) << endl;
    cout << "Subtraction with default argument: " << subtract(10) << endl;
    cout << "Subtraction with explicit values: " << subtract(10, 4) << endl;
    cout << "Multiplication with default argument: " << multiply(6.5) << endl;
    cout << "Multiplication with explicit values: " << multiply(2.5, 4.0) << endl;
    cout << "Division with default argument: " << divide(20.0) << endl;
    cout << "Division with explicit values: " << divide(20.0, 5.0) << endl;
    return 0;
}

