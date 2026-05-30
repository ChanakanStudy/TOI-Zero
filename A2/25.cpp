#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;

    int br,bc;
    cin >> br >> bc;

    int n;
    cin >> n;

    int a[105][105] = {};

    for (int k = 0; k < n; k++) {
        int x,y;
        cin >> x >> y;

        for (int i = x-2; i <= x+2; i++) {
            for (int j = y-2; j <= y+2; j++) {
                if (i >= 0 && i < r && j >= 0 && j < c) {
                    int d = max(abs(i-x),abs(j-y));

                    if (d == 0) {
                        a[i][j] = max(a[i][j],100);
                    }
                    else if (d == 1) {
                        a[i][j] = max(a[i][j],60);
                    }
                    else if (d == 2) {
                        a[i][j] = max(a[i][j],20);
                    }
                }
            }
        }
    }

    int safe = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 0) {
                safe++;
            }
        }
    }

    cout << safe << endl;
    cout << a[br][bc] << "%";
}