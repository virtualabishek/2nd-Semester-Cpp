#include<iostream>
using namespace std;
class myClass {
private:
int roll;
double marks;
public:
myClass() {
    cout<<"Enter the roll. \n";
    cin>>roll;
    cout<<"Enter the marks. \n";
    cin>>marks;
}
void showResult() {
    cout<<"The roll is: "<<roll<<". The marks is: "<<marks<<endl;
}
};
int main() {
myClass s1;
s1.showResult();

    return 0;
}