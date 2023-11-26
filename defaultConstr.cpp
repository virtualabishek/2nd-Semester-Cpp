#include<iostream>
using namespace std;
class myClass {
private:
int roll;
string name;
double marks;
public:
myClass(int r, string n, double m) {
    roll = r;
    name = n;
    marks = m;
} 
void showResult() {
    cout<<"The roll is: "<<roll<<". Marks is: "<<marks<<". And finally your name is: "<<name<<endl;
}
};
int main() {
    myClass c1(1, "Ram", 34.4);
    myClass c2(2, "Sita ", 45.5);
    c1.showResult();
    c2.showResult();
    return 0;
}