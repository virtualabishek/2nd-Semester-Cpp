#include <iostream>
using namespace std;

// class definition
class Counter {
    private:
        int count; // private data member
    public:
        Counter() { count = 0; } // default constructor
        Counter(int c) { count = c; } // parameterized constructor
        // member function to overload prefix increment operator
        Counter operator++ () {
            count++; // increment count by 1
            return Counter(count); // return the updated object
        }
        // friend function to overload postfix increment operator
        friend Counter operator++ (Counter &c, int); // note the int parameter
        // member function to overload prefix decrement operator
        Counter operator-- () {
            count--; // decrement count by 1
            return Counter(count); // return the updated object
        }
        // friend function to overload postfix decrement operator
        friend Counter operator-- (Counter &c, int); // note the int parameter
        // member function to display the count value
        void display() {
            cout << "Count = " << count << endl;
        }
};

// friend function definition
Counter operator++ (Counter &c, int) {
    Counter temp; // create a temporary object
    temp.count = c.count; // copy the count value of c
    c.count++; // increment the count value of c
    return temp; // return the original value of c
}

// friend function definition
Counter operator-- (Counter &c, int) {
    Counter temp; // create a temporary object
    temp.count = c.count; // copy the count value of c
    c.count--; // decrement the count value of c
    return temp; // return the original value of c
}

// main function
int main() {
    Counter c1(10); // create an object of Counter with count = 10
    Counter c2; // create another object of Counter with count = 0
    c1.display(); // display the count value of c1
    c2.display(); // display the count value of c2
    c2 = c1++; // call the postfix increment operator function
    c1.display(); // display the updated count value of c1
    c2.display(); // display the updated count value of c2
    c2 = c1--; // call the postfix decrement operator function
    c1.display(); // display the updated count value of c1
    c2.display(); // display the updated count value of c2
    return 0;
}
