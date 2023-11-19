#include<iostream>
using namespace std;
class myClass {
    public:
    int a, b;
    myClass() {
         a=3;
         b=10;
    }
};
int main() {
    myClass r1;
    cout<<r1.a<<" , "<<r1.b<<endl;
    return 0;
}