#include <iostream>
using namespace std;

int main() {
    int a, b;
    /*
    cout << "Type two numbers you would like to add" << endl;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b << endl;

    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "n++ \t" << n++ << endl // these operations seems to effect the value itelf,
         << "++n \t" << ++n << endl // reassigning n to be n = n + 1
         << "n-- \t" << n-- << endl // they do not seem to just return n - 1
         << "--n \t" << --n << endl // but rather do n = n - 1 and then return n (or vice versa)
         << "n*n \t" << n*n << endl
         << "n/n \t" << n/n << endl
         << "n + 4 \t" << n + 4 << endl
         << "n - 10 \t" << n - 10 << endl
         << "-n \t" << -n << endl
         << "n % 2 \t" << n %2 << endl
         ;

         */

    cout << "Enter two numbers you would like to divide: " << endl;
    cin >> a >> b; 
    cout << "Integer division: " << a / b << endl
         << "Casted float division: " << static_cast<float>(a) / b << endl
         ;

    return 0;
}