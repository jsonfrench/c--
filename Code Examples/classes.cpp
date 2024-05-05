#include <iostream>
using namespace std;

// class definition is much like a struct. begin with the "class" keyword, end with a ";".
class Person {
    public:
        string name;
        int age;
    
        void print(){
            cout << "[" << name << ", " << age << "]" << endl;
        }
        bool is_younger_than(Person person);
};

bool Person::is_younger_than(Person person){ // methods can be defined outside of the class as long as we define them inside the class
    return age < person.age;            // we need to use the "::" operator to establish the scope of this function as inside the class 
}


int main(){

    // instantiate object and sett attributes
    Person john;
    john.name = "john";
    john.age = 16;
    // instantiate object using constructor 
    Person jimmy = {"jimmy", 12};

    // we can print out the attributes of an object 
    cout << john.name << ", " << john.age << endl;
    cout << jimmy.name << ", " << jimmy.age << endl;

    // or we can define a print method in the class instead and call it here
    john.print();

    cout << jimmy.is_younger_than(john) << endl;

    return 0;
}