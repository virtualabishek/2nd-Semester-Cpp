#include<iostream>
using namespace std;
class myClass {
    private:
    int x, y;
    public:
    myClass( int xi, int yi) {
        x=xi;
        y=yi;
    }
    int getx() {
        return x;
    }
    int gety() {
        return y;
    }
};
int main() {
myClass s1(2,4);
cout<<s1.getx()<<endl;
cout<<s1.gety()<<endl;
    return 0;
}