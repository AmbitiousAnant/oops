#include<iostream>
using namespace std;
class Box{
    private:
    int value=10;
    public:
    friend void show(const Box& b);
};
void show(const Box& b){
    cout<<b.value;
}