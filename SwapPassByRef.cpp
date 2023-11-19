#include<iostream>
using namespace std;
void swap(int &, int &);
int main() {
    int a,b;
    cout<<"Enter the two numbers.\n";
    cin>>a>>b;
    cout<<"Before swap:\n Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
    swap(a,b);
    cout<<"After swap:\n Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
    return 0;
}
void swap(int &x, int &y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
}