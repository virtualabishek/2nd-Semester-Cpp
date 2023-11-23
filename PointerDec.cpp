#include<iostream>
using namespace std;

int main() {
    int var = 3;
    int *ip;
    double *dp;
    float *fp;
    char *ch;
    ip = &var;
    cout<<"Variable Value: "<<ip<<endl;
    cout<<"Address: "<<ip<<endl;
    cout<<"Pointer Value: "<<*ip<<endl;
    return 0;
}