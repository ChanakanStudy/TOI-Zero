#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[305] = {};
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        if (cnt[x] > ans) {
            ans = cnt[x];
        }
    }

    cout << ans;
}