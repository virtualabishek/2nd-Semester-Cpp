#include<iostream>
using namespace std;
class myClass {
private:
int a1,a2;
public:
myClass(int a,int b)
{a1 = a; a2=b;}
void operator++(int) {
    a1++;
    a2++;
}
void print() {
    cout<<"A: "<<a1<<"B: "<<a2<<endl;
}

};
int main() {
    myClass c1(2,3);
    c1++;
    c1.print();
    return 0;
}