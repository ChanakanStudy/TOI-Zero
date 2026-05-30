#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long p[200005],v[200005];

    for (int i = 0; i < n; i++) {
        cin >> p[i] >> v[i];
    }

    long long mx = 0;
    int ans = 0;

    for (int i = n-1; i >= 0; i--) {
        if (v[i] < mx) {
            ans++;
        }
        else {
            mx = v[i];
        }
    }

    cout << ans;
}