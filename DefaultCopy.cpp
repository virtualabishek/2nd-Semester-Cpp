#include<iostream>
using namespace std;
class myClass {
public:
int data;
myClass ( int value ):data(value){}
void display(){
    cout<<"The data is: "<<data<<endl;
}
};
int main() {
    myClass o1(3);
    
    return 0;
}