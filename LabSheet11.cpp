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
    
    return 0;
}