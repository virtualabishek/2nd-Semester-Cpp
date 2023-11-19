//Access Specifier and their visibility.
#include <iostream>
using namespace std;
class myClass {
    private:
    int x;
    public:
    int y;
    void getdata() {
        cout<<"Enter the value of x and y.\n";
        cin>>x>>y;
    }
    void showData() {
        cout<<"X = "<<x<<"Y = "<<y<<endl;
    }
};
int main() {
    myClass obj;
    obj.getdata();
    obj.showData();
    cout<<"The value of y is: "<<obj.y<<endl;  
    return 0;
}