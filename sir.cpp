#include<iostream>
using namespace std;
class Fahrenheit;
class Celsius{
    float temp;
    public:
    Celsius(float t):temp(t){}
    Celsius(const Fahrenheit& f);
};
class Fahrenheit{
    float temp;
    public:
    Fahrenheit(float t): temp(t){}
    operator Celsius() const{
        return Celsius((temp - 32)*5/9);
    }
};
int main(){
    
}