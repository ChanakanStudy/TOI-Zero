#include <iostream>
using namespace std;

int main() {
    int n,k,t;
    cin >> n >> k >> t;

    int pos = 1;
    int ans = 1;

    if (t == 1) {
        cout << 1;
        return 0;
    }

    while (true) {
        pos = ((pos-1+k)%n)+1;

        if (pos == 1) {
            cout << ans;
            return 0;
        }

        ans++;

        if (pos == t) {
            cout << ans;
            return 0;
        }
    }
}