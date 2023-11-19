#include<iostream>
using namespace std;
void function( int & x) {
    x--;
    }
int main() {
    int n=5;
    cout<<n<<endl;
    function(n);
    cout<<n<<endl;
    return 0;
}