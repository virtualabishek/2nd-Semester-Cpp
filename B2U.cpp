#include<iostream>
using namespace std;
class basictouser {
    private:
    int feet;
    int inches;
    public:
    basictouser(int f, int i) {
        feet = f;
        inches = i;
    }
    basictouser(float m) {
        feet=int(m);
        inches=12*(m-feet);
    }
    void display() {
        cout<<inches<<endl<<feet<<endl;
    }
};
int main() {
        float a = 12.54;
    basictouser b1=a;

    b1.display();


    return 0;
}