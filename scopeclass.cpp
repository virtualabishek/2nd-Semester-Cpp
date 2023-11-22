#include<iostream>
using namespace std;
int globalvar=20; //file scope with global variable
int main() {
int localvar = 10; //local scope
{
    int blockvar=20;
    cout<<"Inside Inner BLock:"<<endl;
    cout<<"Global Variable: "<<globalvar<<endl;
    cout<<"Local Variable: "<<localvar<<endl;
    cout<<"Block Variable:"<<blockvar<<endl;
}
    cout<<"Outside Inner BLock:"<<endl;
    cout<<"Global Variable: "<<globalvar<<endl;
    cout<<"Local Variable: "<<localvar<<endl;
   //cout<<"Block Variable:"<<blockvar<<endl; This dosen't succed because this  is outside block.
    return 0;
}