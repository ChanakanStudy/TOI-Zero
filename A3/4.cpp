#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> u,v;

    for (int i = 0; i < n; i++) {
        long long x,y;
        cin >> x >> y;

        u.push_back(x+y);
        v.push_back(x-y);
    }

    sort(u.begin(),u.end());
    sort(v.begin(),v.end());

    long long mu = u[n/2];
    long long mv = v[n/2];

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += abs(u[i]-mu);
        ans += abs(v[i]-mv);
    }

    cout << ans;
}