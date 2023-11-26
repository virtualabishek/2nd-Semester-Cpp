#include<iostream>
using namespace std;
class myClass {
int no;
string na;
public:
myClass(int n, string e) {
    no = n;
    na = e;
}
myClass (const myClass &x) {
    no = x.no;
    na=x.na;
}
void Display() {
    cout<<"Name is: "<<na<<". ID is:  "<<no<<endl;
}
};
int main() {
    myClass s1(1, "Abishek");
    myClass s2 = s1;
    s1.Display();
    cout<<"Coppied to second object succesfully. \n";
    s2.Display();

    return 0;
}