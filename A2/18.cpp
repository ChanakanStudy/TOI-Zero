#include <iostream>
using namespace std;

int main() {
    char c;
    int n;
    cin >> c >> n;

    string a[3] = {"Red","Green","Blue"};
    int start = 0;

    if (c == 'R') start = 0;
    else if (c == 'G') start = 1;
    else if (c == 'B') start = 2;

    for (int i = 0; i < n; i++) {
        cout << a[(start+i)%3];
        if (i+1 < n) cout << " ";
    }
}