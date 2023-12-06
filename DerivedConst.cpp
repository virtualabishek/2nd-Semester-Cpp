#include<iostream>
using namespace std;
class A {
    protected:
    int adata;
    public:
    A (int a ) {
        adata = a;
    }
};
class B: public A {
    protected: 
    int bdata;
    public:
    B (int a, int b) :A(a) {
        bdata = b;
    }
    void showData() {
        cout<<"Adata: "<<adata<<"BData: "<<bdata<<endl;
    }
};
int main() {
    B b1(2,3);
    b1.showData();

    return 0;
}