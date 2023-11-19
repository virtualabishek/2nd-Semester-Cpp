#include<iostream>
using namespace std;
class myClass {
    public:
    myClass() {
        cout<<"This is constructor."<<endl;
    }
    ~myClass() {
        cout<<"This is destrutor. I am destroyed by constructor."<<endl;
    }
};
int main() {
myClass t, t1,t2,t3;
    return 0;
}
//Here the constructor has automatically passed the 3 objects and deleted itself.