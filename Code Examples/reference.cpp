#include <iostream>
using namespace std;

int main() {

    int player_score;
    int &display_score = player_score;  // display score is a reference to the variable player score. I think this means the data stored in display_sore's memory address is a reference to player score? 

    player_score = 1;
    //cout << display_score << endl;  

    bool done = false;

    while(!done){
        cin >> player_score;
        cout << "Player Score: " << display_score << endl;
    }


    display_score = 5;  // changing display_score also seems to change the value of player_score
    cout << display_score << endl;
    cout << player_score << endl;

    // all the elements of this array seem to have the same address
    string names[] = {"jawns", "lawns", "pawns", "strawns"};
    for(string name: names) {
        cout << &name << "  " << name << endl;
    }

    // keeping the variables seperate gives them their own independent memory addresses
    string brawn = "brawn";
    string crawn = "crawn";
    string blawn = "blawn";
    string rawn = "rawn";
    cout << &brawn << "  " << brawn << endl;
    cout << &crawn << "  " << crawn << endl;
    cout << &blawn << "  " << blawn << endl;
    cout << &rawn << "  " << rawn << endl;

    return 0;
}