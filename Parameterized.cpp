#include<iostream>
#include<string>
using namespace std;
class datan {
private:
int id;
string name;
public:
datan ( int i, string na) {
    id=i; //Destination = source
    name=na;
}
void display() {
    cout<<"The id is : "<<id<<endl;
    cout<<"The name is : "<<name<<endl;
}
};
int main() {
    datan s1(10, "ram");
    s1.display();
    return 0;
}