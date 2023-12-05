#include<iostream>
#include<string.h>
using namespace std;
class join {
private:
char *s;
int l;
public:
void getData() {
    char ch[20];
    cout<<"Enter word. \n";
    cin>>ch;
    l=strlen(ch);
    s=new char[l+1];
    strcpy(s,ch);
}
join operator+ (join j) {
    join temp;
    temp.s=new char[l+j.s+1];
    strcpy(temp.s,s);
    strcat(temp.s,j.s);
    return temp;
}
void display() {
    cout<<s<<endl;
}
};
int main() {

    join j1, j2, j3;
    j1.getData();
    j2.getData();
    j3 = j1 + j2;
    cout<<"J3 is: "<<endl;
    j3.display();
    return 0;
}