#include <iostream>
using namespace std;

// class definition
class Complex {
    private:
        float real; // real part of a complex number
        float imag; // imaginary part of a complex number
    public:
        // constructor to initialize real and imag to 0
        Complex() : real(0), imag(0) {}
        // constructor to initialize real and imag to given values
        Complex(float r, float i) : real(r), imag(i) {}
        // member function to display the complex number
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
        // member function to overload + operator
        Complex operator+ (Complex c) {
            // create a temporary object to store the sum
            Complex temp;
            // add the real parts and store in temp
            temp.real = real + c.real;
            // add the imaginary parts and store in temp
            temp.imag = imag + c.imag;
            // return the temp object
            return temp;
        }
};

// main function
int main() {
    // create two objects of Complex class
    Complex c1(2.5, 3.7);
    Complex c2(1.2, 4.3);
    // display the complex numbers
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    // create another object to store the sum
    Complex c3;
    // call the operator function to add c1 and c2
    c3 = c1 + c2;
    // display the sum
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}
