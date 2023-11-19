// Static DAta Members. 
#include<iostream>
using namespace std;
class student {
    private:
    int roll;
    char name[10];
    static int count;
    public:
    void getData() {
        cout<<"Enter the roll number. \n";
        cin>>roll;
        cout<<"Enter the name\n";
        cin>>name;
        count++;
    }
    void showData() {
    cout<<"Count: "<<count<<endl;
    }
};
int student :: count=0;
int main() {
student s1,s2,s3;
s1.showData();
s1.showData();
s1.showData();
s1.getData();
s1.getData();
s1.getData();
return 0;
}