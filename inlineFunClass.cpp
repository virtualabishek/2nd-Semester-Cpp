#include<iostream>
using namespace std;
class operation {
    private:
    int a,b, add, mul;
    float div;
    public:
    void get();
    void sum();
    void multiply();
    void division();
};
inline void operation:: get() {
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the seconf number\n";
    cin>>b;
}
inline void operation:: sum() {
    add=a+b;
    cout<<"Addition is: "<<add<<endl;
}
inline void operation:: multiply() {
    mul=a*b;
    cout<<"Multipication is: "<<mul<<endl;
}
inline void operation:: division() {
    div=a/b;
    cout<<"Division is: "<<div<<endl;
}
int main() {
    operation s;
    s.get();
    s.sum();
    s.multiply();
    s.division();
    return 0;
}