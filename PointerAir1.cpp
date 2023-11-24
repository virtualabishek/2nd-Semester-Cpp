//https://www.geeksforgeeks.org/pointer-arithmetics-in-c-with-examples/
//It adds or subtracts the the byte of data type to the address. 
#include<iostream>
using namespace std;
int main() {
    int a = 5;
    int *it = &a;
    cout<<"Origianl Address: "<<it<<endl;
    it++;
    cout<<"Incremented Address: "<<it<<endl;
    it--;
    cout<<"Decremented Address: "<<it<<endl;
    return 0;
}