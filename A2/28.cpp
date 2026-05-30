#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    int bad = 0;

    for (int i = 0; i < n; i++) {
        int x = a[i] - '0';
        int y = b[i] - '0';

        if (x + y != 9) {
            bad++;
        }
    }

    if (bad == 0) {
        cout << "YES";
    }
    else {
        cout << "NO " << bad;
    }
}