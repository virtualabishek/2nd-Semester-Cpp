#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class String {
private:
char *s;
int l;
public:
    void getdata() {
        char str[20];
        cout<<"Enter a string"<<endl;
        cin>>str;
        l=strlen(str);
        s=new char[l+1];
        strcpy(s,str);
    }
    void display() {
        cout<<s<<endl;
    }
    String operator+(String x) {
        String temp;
        temp.s=new char[l+x.l+1];
        strcpy(temp.s,s);
        strcat(temp.s,x.s);
        return temp;
    }
};
int main() {
    String s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.display();
    return 0;
}
