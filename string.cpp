#include <iostream>
#include <cstring>
using namespace std;

class String {
    private:
        char str[100];
    public:
        String(const char s[] = "") {
            strcpy(str, s);
        }
        
        String operator+(String s) {
            String temp;
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
            return temp;
        }
        
        void display() {
            cout << str << endl;
        }
};
int main() {
    String s1("Hello, ");
    String s2("World!");
    
    String s3 = s1 + s2;   
    
    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}