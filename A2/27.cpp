#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mx = -1;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > mx) {
            mx = x;
            cnt = 1;
        }
        else if (x == mx) {
            cnt++;
        }
    }

    cout << mx << endl;
    cout << cnt;
}