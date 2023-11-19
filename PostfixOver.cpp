#include<iostream>
using namespace std;
class myClass {
    private:
    int roll;
    int sci;
    public:
    void seData(int r, int s) {
        roll=r;
        sci=s;     
    }
    void operator++(int) {
        roll++;
        sci++;
    }
    void display() {
        cout<<"ROll: "<<roll<<endl;
        cout<<"Science Marks: "<<sci<<endl;
    }

};
int main() {
myClass s1;
s1.seData(2,3);
s1++;
s1.display();
return 0;
}