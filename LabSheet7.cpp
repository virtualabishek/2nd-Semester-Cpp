#include<iostream>
#include<string.h>
using namespace std;
class myClass {
    string name;
    int price;
    public:
    void getData() {
        cout<<"Enter the name of the product. "<<endl;
        cin>>name;
        cout<<"Enter the price of the product. "<<endl;
        cin>>price;
    }
    void showData() {
        cout<<"The name is: "<<name<<", and price is: "<<price<<endl;

    }
};
int main() {
    myClass *i1 = new myClass; // Pointer Object
    myClass i2;
    i1->getData();
    i2.getData();
    cout<<"ITEMS DETAILS"<<endl;
    i1->showData();
    i2.showData();
    return 0;

}