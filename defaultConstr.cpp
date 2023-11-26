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
    
    return 0;
}