#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> x(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }

    sort(x.begin()+1,x.end(),greater<long long>());

    long long sum[1005] = {};

    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i-1]+x[i];
    }

    long long dp[205][1005];

    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = 1e18;
        }
    }

    dp[0][0] = 0;

    for (int i = 1; i <= 200; i++) {
        for (int j = 0; j <= n; j++) {
            for (int t = 1; t <= 10; t++) {
                if (j >= t && dp[i-1][j-t] < 1e18) {
                    long long s = sum[j]-sum[j-t];
                    long long mx = x[j-t+1];
                    long long cost = 1LL*i*(2*s-mx);

                    dp[i][j] = min(dp[i][j],dp[i-1][j-t]+cost);
                }
            }

            dp[i][j] = min(dp[i][j],dp[i-1][j]);
        }
    }

    cout << dp[200][n];
}