#include<iostream>
using namespace std;
class alpha {
    private:
    int x;
    public:
    void getData ( int data) {
        x=data;
    }
    friend class beta;
};
class beta {
public:
void func( alpha a) {
    cout<<a.x<<endl;
}
};
int main() {
    alpha a;
    a.getData(99);
    beta b;
    b.func(a);
    return 0;
}