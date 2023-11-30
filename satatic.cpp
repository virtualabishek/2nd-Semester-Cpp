#include<iostream>
using namespace std;
class myClass {
private:
int roll;
string name;
static int count;
public:
void getData() {
    cout<<"Enter the name and roll. \n";
    cin>>name>>roll;
    count++;
}
void showData() {
    cout<<"Count: "<<count<<endl;
}
};
int myClass:: count=0;
int main() {
    myClass o1, o2;
    o1.showData();
    o2.showData();
    o1.getData();
    o2.getData();
    o1.showData();
    o2.showData();
    return 0;
}