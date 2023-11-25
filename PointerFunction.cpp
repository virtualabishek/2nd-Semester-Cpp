#include<iostream>
using namespace std;
int funcpo(int *ptr) {
    *ptr = *ptr + 5;
    return *ptr;
}
int main() {
int num = 5;
cout<<"Before pointer passed to the function, value is: "<<num<<endl;
funcpo(&num);
cout<<"Before pointer passed to the function, value is: "<<num<<endl;
return 0;
}