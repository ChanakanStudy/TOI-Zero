#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    int cnt[305] = {};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int mn = cnt[1];

    for (int i = 2; i <= k; i++) {
        mn = min(mn,cnt[i]);
    }

    cout << n - mn*k;
}