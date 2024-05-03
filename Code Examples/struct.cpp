#include <iostream>
using namespace std;

int main() {

    // A struct is halfway between an object and an array. It holds elements called "members" that can be accessed with {struct}.{member}
    struct {
        int age;
        string name;
    } student;

    student.age = 5;        // this is how you can set members within a struct
    student.name = "Gio";

    cout << student.name << ", "  << student.age << endl;

    struct car{     // we can give our structs a name
        int num_wheels = 4;
        string make;
    } car1, car2; // structs support multiple assignment. If our struct has a name, we don't need to define anything here

    car1.make = "Ford";
    car2.make = "Hundai";

    car car3;       // naming structs allows us to define more outside of the struct declaration
    car3.make = "Chevy";

    car cars[] = {car1, car2, car3};

    for (car c: cars){
        cout << "A " << c.make << " with " << c.num_wheels << " wheels" << endl;        
    }

    return 0;
}