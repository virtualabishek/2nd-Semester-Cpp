#include<iostream>
using namespace std;
class animal {
    public:
    string color;
    int age;
};
int main() {
    animal cat;
    cout<<"Enter the color of cat. \n";
    cin>>cat.color;
    cout<<"Enter the age of cat. \n";
    cin>>cat.age;
    animal dog;
    cout<<"Enter the color of dog. \n";
    cin>>dog.color;
    cout<<"Enter the age of dog. \n";
    cin>>cat.age;
    cout<<"Age of cat is: "<<cat.age<<endl;
    cout<<"Color of cat is: "<<cat.color<<endl;
    cout<<"Age of dog is: "<<dog.age<<endl;
    cout<<"Color of dog is: "<<dog.color<<endl;
    return 0;
}