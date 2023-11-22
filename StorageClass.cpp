int externvar = 10;
#include<iostream>
using namespace std;
//static storage class
void func() {
    static int count = 0;
    count ++;
    cout<<"Function call count: "<<count<<endl;
};
int main() {
int autovar = 9;
register int regvar = 8;
extern int externvar;
for ( int i =0; i<5; i++) {
    func();
}
cout<<"Auto Storage Class :"<<autovar<<endl;
cout<<"Register Storage Class :"<<regvar<<endl;
cout<<"Extern Storage Class :"<<externvar<<endl;
    return 0;
}