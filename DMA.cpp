#include<iostream>
using namespace std;
int main() 
{
    int *intptr;
    float *floatptr;
    floatptr = new float;
    intptr = new int;
    *floatptr = 45.5;
    *intptr = 50;
    cout<<*floatptr<<endl;
    cout<<*intptr<<endl;
    delete floatptr;
    delete intptr;
    return 0;
}