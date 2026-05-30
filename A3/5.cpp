#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
    int x,type;
};

bool cmp(node a,node b) {
    if (a.x != b.x) return a.x < b.x;
    return a.type > b.type;
}

int main() {
    int n,m;
    cin >> n >> m;

    vector<node> v;

    for (int i = 0; i < m; i++) {
        int s,t;
        cin >> s >> t;

        v.push_back({s,1});
        v.push_back({t,-1});
    }

    sort(v.begin(),v.end(),cmp);

    int cur = 0;
    int ans = 0;

    for (int i = 0; i < v.size(); i++) {
        cur += v[i].type;
        ans = max(ans,cur);
    }

    cout << ans;
}