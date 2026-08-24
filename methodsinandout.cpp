#include <iostream>
using namespace std;
class rectangle{
    int length,widht;
    public:
    void set(int l,int w);
       int area();
    };
    void rectangle::set(int l,int w){
        length=l;widht=w;
    }
    int rectangle::area(){
        return length*widht;
    }
