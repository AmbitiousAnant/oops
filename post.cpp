#include <bits/stdc++.h>
using namespace std;
class Number{
    int x;
    public:
    Number(int a){
        x=a;
    }
    void operator-(){
        x=x;
    }
    void display(){
        cout<<"Value: "<<x<<endl;
    }
};
int main() {
    Number n(10);
    cout<<"Before applying: "<<endl<<n.display();
    -n;
    cout<<"after applying: "<<n.display();
    return 0;
    
}