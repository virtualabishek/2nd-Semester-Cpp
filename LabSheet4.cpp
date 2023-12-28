#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<"The function -1 output: "<<a+b<<endl;
}
void add(double a, double b) {
    cout<<"The function -2 output: "<<a+b<<endl;
}
int main() {
    add(2,3);
    add(3.4, 3.2);
    return 0;
}