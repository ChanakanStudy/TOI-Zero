#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    if (a < 1991) {
        if (b < 1501) {
            cout << "1250";
        }
        else if (b < 2001) {
            cout << "1400";
        }
        else {
            cout << "2000";
        }
    }
    else if (a < 2000) {
        if (b < 1501) {
            cout << "1100";
        }
        else if (b < 2001) {
            cout << "1300";
        }
        else {
            cout << "1700";
        }
    }
    else {
        if (b < 1501) {
            cout << "1000";
        }
        else if (b < 2001) {
            cout << "1200";
        }
        else {
            cout << "1500";
        }
    }
}