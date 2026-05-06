#include <iostream>
using namespace std;

int main() {
    int temp;
    char type;
    cin >> temp >> type;
    if (type == 'C' || type == 'c') {
        if (temp <= 0) {
            cout << "solid";
        }
        else if (temp >= 100) {
            cout << "gas";
        }
        else if (temp > 0 && temp < 100) {
            cout << "liquid";
        }
    }
    else if (type == 'F' || type == 'f') {
        if (temp <= 32) {
            cout << "solid";
        }
        else if (temp >= 212) {
            cout << "gas";
        }
        else if (temp > 32 && temp < 212) {
            cout << "liquid";
        }
    }
}