#include<iostream>
using namespace std;
int a;
int &func() {
    return a;
}
int main() {
func() = 10;
cout<<a;
return 0;
}