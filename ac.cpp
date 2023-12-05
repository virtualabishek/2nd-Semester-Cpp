#include<iostream>
using namespace std;
class myBase{
    public:
    int x;
    myBase() {
        x = 5;
        y = 0;
        z = 0;
    }
    protected:
    int y;
    private:
    int z;
};
void Out(myBase obj) {
    cout<<"X: "<<obj.x<<endl;
}
int main() {
    myBase obj1;
    Out(obj1);

    return 0;
}