#include<iostream>
using namespace std;
int PassbyValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
int PassbyReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    int a = 10, b = 20;
    cout<<"Before Swapping: a = "<<a<<" and b = "<<b<<" ."<<endl;
    PassbyValue(a,b);
    a=10;
    b=20;
    cout<<"Using pass by Value, After Swapping: a = "<<a<<" and b = "<<b<<" ."<<endl;
    PassbyReference(a,b);
    cout<<"Using pass by Reference, After Swapping: a = "<<a<<" and b = "<<b<<" ."<<endl;
    return 0;
}