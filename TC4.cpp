#include<iostream>
using namespace std;

int main() {
    cout<<"Welcome to age comparison app.  This app make comparison between the ages of 3 users. \n";
    int a1, a2, a3;
    string s1, s2, s3;
    cout<<"Enter first user name.\n";
    cin>>s1;
    cout<<"Enter second user name.\n";
    cin>>s2;
    cout<<"Enter third user name.\n";
    cin>>s3;
    cout<<"Enter age of "<<s1<<endl;
    cin>>a1;
    cout<<"Enter age of "<<s2<<endl;
    cin>>a2;
    cout<<"Enter age of "<<s3<<endl;
    cin>>a3;
    if ( a1>a2 && a1>>a3) {
        cout<<s1<<" is a elder. \n";
    }
    else if ( a2>a1 && a2>a3) {
        cout<<s2<<" is a elder. \n";
    }
    else
        cout<<s3<<" is a elder. \n";
    return 0;
}