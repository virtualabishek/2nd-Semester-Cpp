//Friend function is just used to get access of private and public data members.
#include<iostream>
using namespace std;
class value {
    private:
    int a;
    int b;
    public:
    void setData() {
        a=10;
        b=20;
    }
    friend float mean(value s);
};
float mean(value s) {
    return (s.a+s.b)/2;
}
int main() {
    value a;
    a.setData();
    float result=mean(a);
    cout<<"Mean: "<<result;
    return 0;
}