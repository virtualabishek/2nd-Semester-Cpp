//Pointer and Array
#include<iostream>
using namespace std;
const int MAX = 3;
int main() {
int arr[MAX]={1,2,3};
int *ptr = arr;
for (int i=0; i<3; i++) {
    cout<<"The value for ['"<<i<<"'] is "<<*ptr<<endl;
    ptr++;
}
    return 0;
}