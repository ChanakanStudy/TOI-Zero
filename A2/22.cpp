#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
    int x,type;
};

bool cmp(node a,node b) {
    if (a.x != b.x) return a.x < b.x;
    return a.type < b.type;
}

int main() {
    int l,n;
    cin >> l >> n;

    vector<node> v;

    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;

        v.push_back({a,1});
        v.push_back({b,-1});
    }

    sort(v.begin(),v.end(),cmp);

    int cur = 0;
    int ans = 0;

    for (int i = 0; i < v.size(); i++) {
        cur += v[i].type;
        if (cur > ans) ans = cur;
    }

    cout << ans;
}