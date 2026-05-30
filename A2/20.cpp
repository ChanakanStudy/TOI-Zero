#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100005];
    bool use[100005] = {};

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (!use[i]) {
            int cur = i;
            int count = 0;

            while (!use[cur]) {
                use[cur] = true;
                cur = a[cur];
                count++;
            }

            if (count > ans) {
                ans = count;
            }
        }
    }

    cout << ans;
}