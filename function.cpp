#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"Enter two numbers to find a greatest among them. \n";
    cin>>a>>b;
    int c = myFun(a,b);
    cout<<c;
    return 0;
}
int myFun (int x, int y) {
    if ( x > y) 
    return x;
    else
    return y;
}