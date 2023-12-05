#include<iostream>
using namespace std;

class comp {
private:
int hr, min;
public:

void getData() {
    cout<<"Enter hour and minute: 12 00 (format)"<<endl;
    cin>>hr>>min;
}
int operator < (comp c) {
    int t1, t2;
    t1=hr*60+min;
    t2=c.hr*60+c.min;
    if(t1<t2)
    return 1;
    else
    return 0;
}
};

int main() {
    comp c1,c2;
    c1.getData();
    c2.getData();
    if(c1<c2)
    cout<<"c2 is greater. \n";
    else
    cout<<"c1 is greater. \n";
    return 0;
}