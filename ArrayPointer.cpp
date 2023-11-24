#include<iostream>
using namespace std;
const int MAX = 3;
int main() {
    int ab[MAX] = {20,30,40};
    int *ptr;
    ptr =  ab;
    for (int i = 0; i< MAX; i++) 
    {
        cout<<"The value of Variable['"<<i<<"'] is "<<*ptr<<endl;
        ptr++;
    }
    return 0;
}
