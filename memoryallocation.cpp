#include<iostream>
using namespace std;
int main() {
    int* p = NULL;
    p = new(nothrow) int;
    if(!p) {
        cout<<"Allocation Memomry failed.\n";
    }
    else 
    {
        *p=29;
        cout<<"Value of p: "<<*p<<endl;
    }
    float* r = new float(75.25);
    cout<<"Value of r is: "<<*r<<endl;
    int n=5;
    int* q = new(nothrow) int[n];
    if (!q)
    cout<<"Allocation Memomry failed.\n";
    else 
    {
        for (int i=0; i<n; i++)
        q[i]=i+1;
        cout<<"The value stored in block of memory.\n";
        for ( int i = 0; i<n; i++)
        cout<<q[i]<<" ";
    }
    delete p;
    delete r;
    delete[] q;
return 0; 
}