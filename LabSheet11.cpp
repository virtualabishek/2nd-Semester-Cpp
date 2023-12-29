#include<iostream>
using namespace std;
class test {
    private: 
    int x;
    public:
    int y;
    void getData() {
        cout<<"Enter the value of x."<<endl;
        cin>>x>>y;
    }
    void showData() {
        cout<<"Value of x="<<x<<"and value of y ="<<y<<endl;
    }
};
int main() {
    test t;
    t.getData();
    t.showData();
    cout<<"Enter the value of y."<<endl;
    cin>>t.y;
    cout<<"Value is: "<<t.y<<endl;
    return 0;
}