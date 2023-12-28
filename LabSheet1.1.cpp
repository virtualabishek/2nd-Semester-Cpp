#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int l,b,h;
    cout<<"Enter length, breadth, height. \n";
    cin>>l>>b>>h;
    int area, peri, vol;
    area = l*b;
    peri = 2 * (l+b);
    vol = area * h;
    cout<<"ANSWERS"<<setw(13)<<"VALUES"<<endl;
    cout<<"AREA: "<<setw(14)<<area<<endl;
    cout<<"PERIMETER: "<<setw(9)<<peri<<endl;
    cout<<"VOLUME: "<<setw(12)<<vol<<endl;
    return 0;
}
