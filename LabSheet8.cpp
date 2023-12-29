#include <iostream>
using namespace std;

// forward declaration of class B
class B;

// class A definition
class A {
    private:
        int a;
    public:
        A() { a = 0; }
        // friend class declaration
        friend class B;
        // friend function declaration
        friend void showA(A&);
};

// class B definition
class B {
    private:
        int b;
    public:
        B() { b = 0; }
        // member function to modify private members of A
        void setA(A& x, int value) {
            x.a = value;
        }
};

// friend function definition
void showA(A& x) {
    // access private member of A
    cout << "A::a = " << x.a << endl;
}

// main function
int main() {
    A a1;
    B b1;
    // call friend function
    showA(a1);
    // call friend class member function
    b1.setA(a1, 10);
    // call friend function again
    showA(a1);
    return 0;
}
