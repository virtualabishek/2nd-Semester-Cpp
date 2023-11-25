/*
Let's consider a simple example in C++.
In C++, when you create an object, memory is allocated to store the object. This memory allocation happens either 
on the stack or on the heap, depending on how you create the object.

Here's an example:
*/
#include<iostream>
using namespace std;
class MyClass {
    int data;
public:
    MyClass( int value) {   
        data = value;
    }
    int getData() {
        return data;
    }
};
int main() {
    MyClass o1(23);
    cout<<o1.getData();
    MyClass *obj2 = new MyClass(20);
    cout<<obj2->getData()<<endl;
    delete obj2;
    return 0;
    }

/*
In this example, `obj1` is allocated on the stack, and `obj2` is allocated on the heap. Stack allocation is handled 
automatically, but if you allocate memory on the heap using `new`, you must deallocate it using `delete` to avoid memory leaks. 
Remember, objects allocated on the stack are automatically deallocated when they go out of scope. But for objects allocated 
on the heap, you must manually deallocate the memory when you're done using them. If you don't, this can lead to memory leaks,
 where memory that is no longer being used is not returned to the system, reducing the amount of memory available for other
  programs and potentially causing your program to crash. 
*/