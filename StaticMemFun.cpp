#include<iostream>
using namespace std;
class student {
private:
int id;
char name[10];
public:
static int count;
void getData() {
    cout<<"Enter the id and name.\n";
    cin>>id>>name;
    count++;
}
static void showData() {
    cout<<"Count: "<<count<<endl;
}
};
int student::count = 0;
int main() {
student s1,s2,s3;
student::showData();
s1.getData();
s2.getData();
s3.getData();
student::showData();
return 0;
}