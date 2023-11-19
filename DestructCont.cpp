#include<iostream>
using namespace std;
int count=0;
class myClass {
    public:
    myClass () {
cout<<"Total Objects created: "<<count<<endl;
    }
    ~myClass() {
        count--;
        cout<<"Total objects destroyed: "<<count<<endl;
    }
};
int main() {
    myClass s, s1, s2, s3;
    return 0;
}