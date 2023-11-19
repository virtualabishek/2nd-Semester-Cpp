#include<iostream>
using namespace std;
class myClass {
    //Inside Method
    public:
    void out();
    void method() {             
        cout<<"Hello World.\n";
    }
};
//Outside Mehod
void myClass::out() {
    cout<<"This is outside method";
}
int main() {
    myClass myObj;
    myObj.method();
    myObj.out();
    return 0;
}