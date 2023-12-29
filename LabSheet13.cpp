#include<iostream>
using namespace std;
class first {
    protected:
    int a;
    public:
    void getDataA() {
        cout<<"Enter the first number:";
        cin>>a;
    }
};
class second : public first {
    protected:
    int b;
    public:
    void getDataB() {
        cout<<"Enter the second number:";
        cin>>b;
    }
};
class third: public second {
    int c;
    public:
    void getDataC() {
        cout<<"Enter the third number:";
        cin>>c;
    }
    void showPro() {
        cout<<"The Output is: "<<a*b*c<<endl;
    }
};
int main() {
    third c;
    c.getDataA();
    c.getDataB();
    c.getDataC();
    c.showPro();
    return 0;
}