#include <iostream>
#include <math.h>
using namespace std;

int main() {

    // A struct is kind of like a class. The main difference being there is no inheritance for structs. 
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

    struct Point {
        int x;
        int y;
        
        double distance_to(Point p){
            return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
        }
    }; 

    Point p1 = {0,0};  
    Point p2 = {1,1};
    cout << p1.distance_to(p2) << endl;

    return 0;
}