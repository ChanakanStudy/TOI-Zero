#include <iostream>
using namespace std;

int main() {
    long long l,n;
    cin >> l >> n;

    long long sum = 0;

    for (int band = 1; ; band++) {
        long long first = (band-1)*l+1;
        long long last = band*l;
        long long cnt = (first+last)*l/2;

        sum += cnt;

        if (sum >= n) {
            cout << band;
            return 0;
        }
    }
}