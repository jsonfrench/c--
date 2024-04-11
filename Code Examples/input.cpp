#include <iostream>
using namespace std;

int main() {

    cout << "Enter three numbers: " << endl;

    int int_1, int_2, int_3;
    cin >> int_1 >> int_2 >> int_3;

    cout << "You entered " << int_1 << " " << int_2 << " " << int_3 << endl;

    cout << "Type a line below:" << endl;

    string line;
    getline(cin, line);

    cout << "This is the line you entered:" << endl
         << line << endl;

    return 0;
}