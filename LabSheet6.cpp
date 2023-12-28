#include<iostream>
using namespace std;

class myClass {
    int age;
    string name;

public:
    myClass(string n, int a) {
        age = a;
        name = n;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    const int size = 3;
    myClass people[size] = {{"Ram", 1}, {"Hari", 2}, {"Krishna", 3}};
    
    cout << "Information of People: " << endl;
    
    for (int i = 0; i < size; i++) {
        people[i].displayInfo();
    }
    
    return 0;
}
