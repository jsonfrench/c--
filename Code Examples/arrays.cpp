#include <iostream>
using namespace std;

int main() {

    const int ARR_LENGTH = 5;   // set size of array
    int arr[ARR_LENGTH];        // declare array

    // populate array using constant
    for (int i = 0; i < ARR_LENGTH; i++) {
        arr[i] = i*i;
    }
    
    // print array using sizeof()
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n" << "you printed " << sizeof(arr) / sizeof(int) << " elements" << endl;

    // for some reason, if  i put the 2-d array code below the string array code, the whole thing breaks. i'm scared. <- exception has occured segmentation fault

    // 2 dimensional array
    int height = 12; 
    int width = 12;
    int grid[height][width];
    cout << "===TIMES TABLES===" << endl;
    for(int i = 1; i < height+1; i++) {
        for(int j = 1; j < width+1; j++) {
            grid[i][j] = i*j;
            cout << grid[i][j] << "\t";
        }
        cout << endl;
    }

    // declare and print a string array using for each loop
    string words[] = {"the", "pasta", "is", "ready"};
    for (string word: words) {
        cout << word << " ";
    }
    cout << endl;


    return 0;
}