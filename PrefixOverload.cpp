#include<iostream>
using namespace std;
class myClass {
private:
int length;
int breadth;
public:
void setData (int l, int b) {
    length=l;
    breadth=b;
}
void operator++() {
    ++length;
    ++breadth;
}
void display() {
    cout<<"Length: "<<length<<endl;
    cout<<"Breadth: "<<breadth<<endl;
}
};
int main() {
    myClass r1;
    r1.setData(2,3);
    ++r1;
    r1.display();
    return 0;
}