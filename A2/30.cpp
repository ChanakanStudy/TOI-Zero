#include <iostream>
using namespace std;

int main() {
    int a[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }

    int row = -1;
    int col = -1;

    for (int i = 0; i < 5; i++) {
        int sum = 0;

        for (int j = 0; j < 5; j++) {
            sum += a[i][j];
        }

        if (sum % 2 == 1) {
            row = i;
        }
    }

    for (int j = 0; j < 5; j++) {
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            sum += a[i][j];
        }

        if (sum % 2 == 1) {
            col = j;
        }
    }

    cout << row << " " << col;
}