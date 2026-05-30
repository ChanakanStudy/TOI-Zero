#include <iostream>
using namespace std;

bool between(int a,int b,int x,int n) {
    if (a < b) return a < x && x < b;
    return x > a || x < b;
}

int main() {
    int n;
    cin >> n;

    int a[305],b[305];
    a[0] = b[0] = 1;

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        int x1 = a[i-1], y1 = a[i];
        int x2 = b[i-1], y2 = b[i];

        if (x1 == x2 && y1 == y2) {
            ans++;
        }
        else if (x1 != x2 && x1 != y2 && y1 != x2 && y1 != y2) {
            bool p = between(x1,y1,x2,n);
            bool q = between(x1,y1,y2,n);

            if (p != q) ans++;
        }
    }

    cout << ans;
}