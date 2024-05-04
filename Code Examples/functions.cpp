#include <iostream>
using namespace std;

// you can declare functions before the main() block and then define them later 
void printStuff();
void printString(string fstring); 
int add(int num1, int num2);
int fibonacci(int num);

int main() {

    printStuff();
    printString("my stuff.");
    int num1, num2; 
    cin >> num1 >> num2;
    cout << add(num1, num2) << endl;
    for (int i = 0; i < 10; i++){
        cout << fibonacci(i) << endl;
    }
    return 0;
}

void printStuff() {
    cout << "stuff." << endl;
}

void printString(string fstring) {
    cout << fstring << endl;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int fibonacci(int num) {
    if (num < 2) {
        return 1;
    } 
    return fibonacci(num-2) + fibonacci(num-1);
}
