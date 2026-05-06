#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    string point,type;

    if (n.length() == 2) {
        if (n[0] >= '2' && n[0] <= '9') {
            point = string(1, n[0]);;
        }
        else if (n[0] == 'A') {
            point = "ace";
        }
        else if (n[0] == 'J') {
            point = "jack";
        }
        else if (n[0] == 'Q') {
            point = "queen";
        }
        else if (n[0] == 'K') {
            point = "king";
        }

        if (n[1] == 'D') {
            type = "diamonds";
        }
        else if (n[1] == 'H') {
            type = "hearts";
        }
        else if (n[1] == 'S') {
            type = "spades";
        }
        else if (n[1] == 'C') {
            type = "clubs";
        }
    }
    else if (n.length() == 3) {
        point = "10";
        if (n[2] == 'D') {
            type = "diamonds";
        }
        else if (n[2] == 'H') {
            type = "hearts";
        }
        else if (n[2] == 'S') {
            type = "spades";
        }
        else if (n[2] == 'C') {
            type = "clubs";
        }
    }

    cout << point << " of " << type;
}