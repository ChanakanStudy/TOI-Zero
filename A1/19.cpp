#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b) {
        if (a == c) {
            cout << "all the same";
        }
        else {
            cout << "neither";
        }
    }
    else {
        if (a != c) {
            cout << "all different";
        }
        else {
            cout << "neither";
        }
    }
}