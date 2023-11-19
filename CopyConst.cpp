#include<iostream>
using namespace std;
class getnew {
    private:
    int x;
public:
void getdata(int xi) {
    x=xi;
}
void display() {
    cout<<"ID: "<<x<<endl;
}
};
int main() {
getnew s1;
s1.getdata(10);
s1.display();
getnew s2(s1);
s1.display();
    return 0;
}