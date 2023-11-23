#include<iostream>
using namespace std;

int main() {
    cout<<"Welcome to Voter App. \n Enter your age. \n";
    int age;
    cin>>age;
    if( age > 17) 
    cout <<"You are eligible. \n";
    else 
    cout<<"You are not eligible. \n";
    return 0;
}