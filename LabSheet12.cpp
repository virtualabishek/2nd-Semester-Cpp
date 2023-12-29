#include<iostream>
using namespace std;

class first {
protected:
    int a;
public:
    void getData() {
        cout << "Enter the value of a: ";
        cin >> a;
    }
};

class second : public first {
    int b;
public:
    void getDataB() {
        getData(); // Call the base class function to get the value of 'a'
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void calcu() {
        cout << "The product of " << a << " and " << b << " is: " << a * b << endl;
    }
};

int main() {
    second obj;
    obj.getDataB();
    obj.calcu();
    return 0;
}
