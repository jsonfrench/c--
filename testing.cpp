#include <iostream>
using namespace std;

int main() {
    enum card_types {DIAMOND, HEART, SPADES, CLUBS};

    card_types card1 = DIAMOND;

    cout << card1;
    return 0;
}