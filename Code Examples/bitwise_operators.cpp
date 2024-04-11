#include <iostream>
using namespace std;

int main() {

    int a = 0b1011;
    int b = 0b1101;

    cout << "a: " << a << endl  //ideally i would like to format a as a binary number, but i haven't learned formatting yet
         << "b: " << b << endl
         << "a | b: " << (a | b) << endl    // bitwise OR
         << "a & b: " << (a & b) << endl    // bitwise AND
         << "a ^ b: " << (a ^ b) << endl    // bitwise XOR
         << "~a : " << (~a) << endl      // bitwise NOT
    ;

    int c;
    cout << "Enter a number: " << endl;
    cin >> c;  
    cout << "Doubled: " << (c << 1) << endl        // bitshift left
         << "Halved: " << (c >> 1) << endl         // bitshift right
         ; 


    return 0;
}