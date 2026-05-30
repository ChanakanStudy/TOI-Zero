#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<long long,pair<long long,long long>> a,b;

    long long x,y,ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        long long p = x-y;
        long long q = x+y;

        if (!a.count(p)) a[p] = {x,x};
        else {
            a[p].first = min(a[p].first,x);
            a[p].second = max(a[p].second,x);
        }

        if (!b.count(q)) b[q] = {x,x};
        else {
            b[q].first = min(b[q].first,x);
            b[q].second = max(b[q].second,x);
        }
    }

    for (auto i : a) {
        ans = max(ans,i.second.second-i.second.first);
    }

    for (auto i : b) {
        ans = max(ans,i.second.second-i.second.first);
    }

    cout << ans;
}