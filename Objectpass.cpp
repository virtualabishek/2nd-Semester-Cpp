//Pass by Value.
/*Program to add two objects each having private data
members feet and inches. */
#include<iostream>
using namespace std;
class myClass {
    private:
    int feets;
    int inches;
    public:
    void setData( int f, int i) {
        feets = f;
        inches = i;
    }
    void addData(myClass d1, myClass d2) { //class name object name as parameter
    feets = d1.feets + d2.feets;
    inches = d1.inches + d2.inches;
    }
    void display() {
        cout<<feets<<" , "<<inches<<endl;
    }
};
int main() {
    myClass d1, d2,d3;
    d1.setData(3,4);
    d2.setData(5,3);
    d3.addData(d1,d2);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}