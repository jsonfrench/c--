#include <iostream>
using namespace std;

int main() {

    //==============
    // C++ POINTERS
    //==============

    string name = "mike";   // variable
    string* name_address = &name;   // pointer

    // All valid pointer declarations 
    // string* name_address = &name;    
    // string * name_address = &name;   
    // string *name_address = &name;   

    cout << name << endl;   // literal assigned to name 
    cout << &name << endl;  // memory location of name 
    cout << name_address << endl;   // memory location of name (stored in a pointer)
    cout << &name_address << endl;  // memory address of the pointer that points to the memory location of name

    //dereferencing
    cout << *name_address << endl;   // gets value stored at address

    //these two statements are equal:
    *name_address = "stan";
    name = "stan";

    return 0; 
}