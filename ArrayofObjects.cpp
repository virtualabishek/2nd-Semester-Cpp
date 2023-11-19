//Array of Objects
/* ID Magyo, Salary magyo*/
#include<iostream>
using namespace std;
const int MAX = 100;
class arr {
private:
int id;
int salary;
public:
void getData() {
    cout<<"Enter the ID of employee. \n";
    cin>>id;
    cout<<"Enter the salary of employee. \n";
    cin>>salary;
}
void showData() {
    cout<<"The employee ID is: \'"<<id<<"\'.\n";
    cout<<"The employee salary is: \'"<<salary<<"\'.\n";
    }
};
int main() {
arr a[MAX];
int n=0;
char ab;
do {
    cout<<"Enter the number of employee."<<n+1<<endl;;
    a[n++].getData();
    cout<<"Do you want to enter more data? \n Hints: y-yes\n n-no.\n";
    cin>>ab;
} while ( ab!='n');
for(int i=0; i<n; i++) {
    cout<<"\n Employee Number is: "<<i+1;
    a[i].showData();
}
return 0;
}