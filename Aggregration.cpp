#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    protected:
    int eid;
    string sal;
    public:
    void getData() {
        cout<<"Enter the employee Id and salary. \n";
        cin>>eid>>sal;
    }
    void displayData() {
        cout<<"Employee Id: "<<eid<<endl;
        cout<<"Employee Salary: "<<sal<<endl;
    }
};
class Company {
protected:
string ename;
Employee e;
public:
void getData() {
    cout<<"Enter the company name. \n";
    cin>>ename;
    e.getData();
}
void displayData() {
    cout<<"Company Name is: "<<ename<<endl;
    e.displayData();
}
};
int main() {
    Company c;
    c.getData();
    c.displayData();
    return 0;
}