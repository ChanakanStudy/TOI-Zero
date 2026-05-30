#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    int a[100005];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt[100005] = {};
    int diff = 0;
    int r = 0;
    long long ans = 0;

    for (int l = 0; l < n; l++) {
        while (r < n && diff < k) {
            if (cnt[a[r]] == 0) diff++;
            cnt[a[r]]++;
            r++;
        }

        if (diff >= k) {
            ans += n-r+1;
        }

        cnt[a[l]]--;

        if (cnt[a[l]] == 0) {
            diff--;
        }
    }

    cout << ans;
}