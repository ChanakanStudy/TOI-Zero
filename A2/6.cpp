#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char a[35][35];
    bool dp[35][35] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (a[i][j] == 'X') {
                dp[i][j] = false;
            }
            else if (i == n-1 && j == n-1) {
                dp[i][j] = true;
            }
            else {
                if (i+1 < n && dp[i+1][j]) dp[i][j] = true;
                if (j+1 < n && dp[i][j+1]) dp[i][j] = true;
            }

            if (dp[i][j]) {
                ans++;
            }
        }
    }

    cout << ans;
}