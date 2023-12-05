#include<iostream>
#include<string.h>
using namespace std;
class student {
    public:
    string name;
    int roll;
    int dob;
    student(string s, int r, int d)
    { name = s; roll = r; dob = d; }
    void display() {
        cout<<"Name: "<<name<<"\t Roll: "<<roll<<"\tDOB: "<<dob<<endl;
    }
};
class foreign : public student
{
    string country;
    public:
    foreign ( string s, int r, int d, string f )
    { country = f; }
    void displayForeign() {
        cout<<"Country: "<<country<<endl;
    }
};
int main() {
    foreign f1("Chandler", 1, 1990, "Japan");
    f1.displayForeign();

    return 0;
}