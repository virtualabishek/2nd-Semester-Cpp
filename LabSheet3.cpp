#include<iostream>
using namespace std;
inline float rstodo ( float rs ) {
    return rs / 132;
}
int main() {
    int r;
    cout<<"Enter the rs. "<<endl;
    cin>>r;
    cout<<"The converted into dollor is: "<<rstodo(r)<<endl;
    return 0;
    
}