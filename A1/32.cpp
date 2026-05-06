#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i<n;i++) {
        cout << "*";
    }
    if (n-2 < 1) {
        return 0;
    }
    cout << endl;
    for (int i = 0 ; i<n-2;i++) {
        cout << "*";
    }
    if (n-4 < 1) {
        return 0;
    }
    cout <<endl;
    for (int i = 0 ; i<n-4;i++) {
        cout << "*";
    }
}