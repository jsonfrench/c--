#include <iostream>
using namespace std;

// class definition is much like a struct. begin with the "class" keyword, end with a ";".
class Person {
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;  // "this->name" is like "this.name" from java
            this->age = age;
        }
    
        void print(){
            cout << "[" << name << ", " << age << "]" << endl;
        }
        bool is_younger_than(Person person);
};

class Student: public Person { // Student is a subclass of Person
    private: 
        int grade;
    public: 
        Student(string name, int age) : Person(name, age){
            grade = age - 5;
        }
        int get_grade() {
            return grade;
        }
};

bool Person::is_younger_than(Person person){ // methods can be defined outside of the class as long as we define them inside the class
    return age < person.age;            // we need to use the "::" operator to establish the scope of this function as inside the class 
}


int main(){

    // instantiate object and sett attributes
    Person john("John", 16);
    // apparently this is a valid way to intialize a class
    Person jimmy = {"jimmy", 12};

    // we can print out the attributes of an object 
    cout << john.name << ", " << john.age << endl;
    cout << jimmy.name << ", " << jimmy.age << endl;

    // or we can define a print method in the class instead and call it here
    john.print();

    cout << jimmy.is_younger_than(john) << endl;

    Student jack("jack", 8);
    cout << jack.name << " is in grade " << jack.get_grade() << endl;
    jack.print();


    return 0;
}