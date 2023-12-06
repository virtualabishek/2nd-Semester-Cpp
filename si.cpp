#include<iostream>
using namespace std;
class A {
    protected:
    int a;
    public:
    void setA() {
        cout<<"Enter the value of a. \n";
        cin>>a;
    }
};
class B : public A {
    int b, p;
    public:
    void setB() {
        cout<<"Enter the value of b. \n";
        cin>>b;
    }
    void pro() {
        p=a*b;
        cout<<"The product is: "<<p<<endl;
    }
};
int main() {
B b1;
b1.setA();
b1.setB();
b1.pro();

    return 0;
}