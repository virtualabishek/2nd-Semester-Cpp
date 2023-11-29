#include<iostream>
using namespace std;
class myClass {
public:
int a;
void add(myClass o)
{
    a = a + o.a;
}
};
int main() {
    myClass o1, o2;
    o1.a=50;
    o2.a=100;
    cout<<"Object 1: "<<o1.a<<endl;
    cout<<"Object 2: "<<o2.a<<endl;
    o2.add(o1);
    cout<<"New Values using add function"<<endl;
    cout<<"Object 1: "<<o1.a<<endl;
    cout<<"Object 2: "<<o2.a<<endl;

    return 0;
}