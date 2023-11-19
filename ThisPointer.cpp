#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class person {
private:
    int id;
    char name[10];

public:
    void setData(const char name[10], int id) {
        strcpy(this->name, name);
        this->id = id;
    }

    void Display() {
        cout << "Name: " << this->name << endl;
        cout << "Id: " << this->id << endl;
    }

    person isElder(person p) {
        if (id > p.id) {
            return *this;
        }
        else {
            return p;
        }
    }
};

int main() {
    person p, p1, p2;
    p1.setData("Ram", 2);
    p2.setData("Rina", 3);
    p = p1.isElder(p2);
    cout << "Greater one is: " << endl;
    p.Display(); // Display the greater person
    return 0;
}
