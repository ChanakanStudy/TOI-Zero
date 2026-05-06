#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a < b) {
        if (b < c) {
            cout << "increasing";
        }
        else {
            cout << "neither";
        }
    }
    else if (a > b){
        if (b > c) {
            cout << "decreasing";
        }
        else {
            cout << "neither";
        }
    }
    else {
        cout << "neither";
    }
}