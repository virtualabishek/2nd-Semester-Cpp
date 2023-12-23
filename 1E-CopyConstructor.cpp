#include<iostream>
using namespace std;

class Copy {
private:
    int roll;
    string name;

public:
    Copy(int r, string n) {
        roll = r;
        name = n;
    }

    Copy(const Copy &c1) {
        roll = c1.roll;
        name = c1.name;
    }

    void print() {
        cout << "Student Name: " << name << " Student Roll: " << roll << endl;
    }
};

int main() {
    Copy c1(1, "ram");
    Copy c2 = c1;
    c1.print();
    c2.print();

    return 0;
}
