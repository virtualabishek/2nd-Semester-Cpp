#include<iostream>
using namespace std;

class A {
protected:
    int a;
public:
    void setA() {
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }
};

class B : public A {
protected:
    int b;
public:
    void setB() {
        cout << "Enter value of b: " << endl;
        cin >> b;
    }
};

class C : public B {
public:
    int p, c;

    void setC() {
        cout << "Enter the value of c: " << endl;
        cin >> c;
    }

    void pro() {
        p = a * b * c;
        cout << "Product: " << p << endl;
    }
};

int main() {
    C c1;
    c1.setA();
    c1.setB();
    c1.setC();
    c1.pro();

    return 0;
}
