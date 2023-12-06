#include<iostream>
using namespace std;
class A {
    public:
    void show() {
        cout<<"Hey, Chandler! This is A class. "<<endl;
    }
};
class B {
    public:
    void show() {
        cout<<"Hey Ross! This is B Class.  "<<endl;
    }
};
class C : public A, public B 
{

};
int main() {
    C c;
    c.A::show();
    c.B::show();
    return 0;
}