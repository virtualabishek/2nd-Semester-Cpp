//Nesting of Member Functions
//Take p,t,r as input and show Total ( p + si),
#include<iostream>
using namespace std;
class myClass {
    private:
    float pr,ti,ra;
    public:
    void setData(float p, float t, float r) 
    { pr = p; ti = t; ra = r; }
    float si() {
        return (pr*ti*ra)/100;
    }
    float total() {
        return pr+si();
    }
};
int main() {
float p,t,r;
myClass myObj;
cout<<"Enter the principle, time and rate.\n";
cin>>p>>t>>r;
myObj.setData(p,t,r);
cout<<"Total: "<<myObj.total();
}