#include<iostream>
using namespace std;

int main() {
    int *intptr;
    float *floatptr;

    // Ask the user for input
    cout << "Enter an integer: ";
    intptr = new int;
    cin >> *intptr;

    cout << "Enter a floating-point number: ";
    floatptr = new float;
    cin >> *floatptr;

    // Output the values
    cout << "Entered values:" << endl;
    cout << "Integer: " << *intptr << endl;
    cout << "Float: " << *floatptr << endl;

    // Deallocate memory
    delete intptr;
    delete floatptr;

    return 0;
}
