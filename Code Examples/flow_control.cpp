#include <iostream>
using namespace std;

int main() {

    // do while - good for input validation - removes the need for a break statement in the loop
    const int DESIRED_INPUT = 3;
    int user_input;
    do{
        cout << "Enter the number " << DESIRED_INPUT << endl;
        cin >> user_input;
    } while (user_input != DESIRED_INPUT);

    // while loop
    const int DESIRED_INPUT2 = 2;
    user_input = 0; // do-while avoids the need for this line - we don't have to initialize a dummy value before the while condition checks for it.
    while (user_input != DESIRED_INPUT2) {
        cout << "Enter the number " << DESIRED_INPUT2 << endl;
        cin >> user_input;
    }

    // for loop
    int iterations = 5;
    for (int i = 0; i < iterations; i++) {
        cout << i << endl;
    }

    // for loop: multiple initializations
    int i;
    char letter;
    for (i = 0, letter = 'A'; i < 26; i++, letter++) {
        cout << letter;
    }
    cout << endl;

    // ehanced for loop
    string word = "curmudgeonly"; 
    for (char letter : word) {
        cout << letter << ".";
    }
    cout << endl;


    // switch case
    int day;
    cout << "Enter a number 1-7" << endl;
    cin >> day;
    
    switch (day) {
        case (1): 
            cout << "Monday" << endl;
            break;
        case (2): 
            cout << "Tuesday" << endl;
            break;
        case (3): 
            cout << "Wednesday" << endl; 
            break;
        case (4): 
            cout << "Thurday" << endl;
            break;
        case (5): 
            cout << "Friday" << endl;
            break;
        case (6): 
        case (7):
            cout << "Weekend!" << endl; 
            break;
        default: 
            cout << "Not a number 1-7" << endl;
            break;
    }

    // shorthand if
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    string is_even = (num % 2 == 0) ? "even" : "odd";
    cout << "The number is " << is_even << endl; 

    return 0;
}