#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {

            if (i == n-1 || j == 0 || i == j) {
                cout << 0;
            }
            else {
                cout << 1;
            }

            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }
}