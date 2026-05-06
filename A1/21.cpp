#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%4 == 0) {
        if (n%100 == 0) {
            if (n%400 == 0) {
                cout << "yes";
            }
            else if (n < 1582) {
                cout << "yes";
            }
            else {
                cout << "no";
            }
        }
        else {
            cout << "yes";
        }
    }
    else {
        cout << "no";
    }
}