#include <iostream>
using namespace std;

// you can declare functions before the main() block and then define them later 
void printStuff();
void printString(string fstring); 
int add(int num1, int num2);
double add(double num1, double num2); //overloading *yawn* 
int fibonacci(int num);
void swapNums(int &num1, int &num2);
void printArr(int intArr[5]);

// functions can also be defined before the main block
void hello(string name = "user") {
    cout << "hello " << name << "!" << endl;
}

int main() {

    //void
    printStuff();

    //single param
    printString("my stuff.");

    //multiple params 
    int num1, num2; 
    cin >> num1 >> num2;
    cout << add(num1, num2) << endl;

    //recursion
    for (int i = 0; i < 10; i++){
        cout << fibonacci(i) << endl;
    }

    //passing a reference 
    cout << num1 << " " << num2 << endl;
    swapNums(num1, num2);   // note that to pass in a reference, you need to pass in a variable in the function call. The function definition is where you specify that you're using its memory address
    cout << num1 << " " << num2 << endl;

    //pass in an array
    int scores[5] = {9, 7, 10, 5, 8};
    printArr(scores);

    //overloaded add function can add doubles now!
    cout << add(num1/3.0, num2/5.0) << endl;

    // functions supplied with no arguments will use their default parameters
    hello();
    hello("john");
    
    return 0;
}

// void function, returns nothing 
void printStuff() {
    cout << "stuff." << endl;
}

// functions can have parameters, 
void printString(string fstring) {
    cout << fstring << endl;
}

// recursion rocks 
int fibonacci(int num) {
    if (num < 2) {
        return 1;
    } 
    return fibonacci(num-2) + fibonacci(num-1);
}

// functions can have multiple parameters 
int add(int num1, int num2) {
    return num1 + num2;
}

// passing in a reference allows you to modify variables outside the function's scope  
// note that passing in ints here would not have the same effect
void swapNums(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// pass in an array - this is way more complicated than it should be
void printArr(int intArr[]) {
    cout << "[";
    for (int i=0; i < 5; i++) {
        cout << intArr[i] << ", ";
    }
    cout << "\b\b]" << endl;
}

// overloaded the add() functions to take double values.
double add(double num1, double num2) {
    return num1 + num2;
}
