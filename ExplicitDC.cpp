//Explicit Default Constructor 
#include <iostream>
using namespace std;

class myClass {
public:
    string name;
    int roll;

    myClass() {
        cout << "Enter your name:  "<<endl;
        cin >> name;
        cout << "Enter your roll: "<<endl;
        cin >> roll;
    }
};

int main() {
    myClass s;
    cout << "Name: " << s.name << " , Roll: " << s.roll << endl;
    return 0;
}
