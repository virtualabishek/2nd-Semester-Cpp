#include<iostream>
using namespace std;
class Complex {
private:
int real, img;
public:
Complex(int r=0, int i=0){
    real = r;
    img = i;
}
Complex operator +(Complex c){
    Complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}
void print(){
    cout<<real<<"+"<<img<<"i"<<endl;
}
};
int main() {
    Complex c1(2,3), c2(4,5);
    Complex c3 = c1+c2;
    c3.print();
    return 0;
}