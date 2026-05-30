#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int h[1005];

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (h[i] > h[i+1]) {
                ans++;
            }
        }
        else if (i == n-1) {
            if (h[i] > h[i-1]) {
                ans++;
            }
        }
        else {
            if (h[i] > h[i-1] && h[i] > h[i+1]) {
                ans++;
            }
        }
    }

    cout << ans;
}