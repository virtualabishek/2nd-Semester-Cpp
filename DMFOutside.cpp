//Defining member function of class.
#include<iostream>
using namespace std;
class myClass {
    private:
    int length, breadth;
    public:
    void setData(int l, int b) {
        length=l;
        breadth=b;
    }
    void showdata();
    int findarea();
    int findperi();
};
void myClass::showdata() {
    cout<<"Length: "<<length<<endl;
    cout<<"Breadth: "<<breadth<<endl;
}
int myClass::findarea() {
    return length*breadth;
}
int myClass::findperi() {
    return (2*length+breadth);
}

int main() {
    myClass ob;
    ob.setData(2,3);
    ob.showdata();
    cout<<"Area is: "<<ob.findarea()<<endl;
    cout<<"Peri is: "<<ob.findperi()<<endl;

    return 0;
}