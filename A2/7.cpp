#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct cost {
    int a,b;
};

int n,m;
int l[305],r[305];
int mark[305];
int sub[305],need[305];
vector<int> ch[305];
cost dp[305];
int pick[305];

bool better(cost x,cost y) {
    if (x.a != y.a) return x.a < y.a;
    return x.b < y.b;
}

void dfs(int u) {
    sub[u] = 1;
    need[u] = mark[u];

    for (int i = 0; i < ch[u].size(); i++) {
        int v = ch[u][i];
        dfs(v);
        sub[u] += sub[v];
        need[u] += need[v];
    }

    cost take;
    take.a = 1;
    take.b = sub[u]-need[u];

    cost nottake;
    nottake.a = 0;
    nottake.b = 0;

    if (mark[u]) {
        nottake.a = 1000000;
        nottake.b = 1000000;
    }
    else {
        for (int i = 0; i < ch[u].size(); i++) {
            int v = ch[u][i];
            nottake.a += dp[v].a;
            nottake.b += dp[v].b;
        }
    }

    if (better(take,nottake)) {
        dp[u] = take;
        pick[u] = 1;
    }
    else {
        dp[u] = nottake;
        pick[u] = 0;
    }
}

void sol(int u,vector<int> &ans) {
    if (pick[u]) {
        ans.push_back(u);
        return;
    }

    for (int i = 0; i < ch[u].size(); i++) {
        sol(ch[u][i],ans);
    }
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        mark[x] = 1;
    }

    for (int i = 1; i <= n; i++) {
        int p = 0;

        for (int j = 1; j <= n; j++) {
            if (j == i) continue;

            if (l[j] < l[i] && r[i] < r[j]) {
                if (p == 0 || (r[j]-l[j] < r[p]-l[p])) {
                    p = j;
                }
            }
        }

        ch[p].push_back(i);
    }

    for (int i = 0; i < ch[0].size(); i++) {
        dfs(ch[0][i]);
    }

    vector<int> ans;

    for (int i = 0; i < ch[0].size(); i++) {
        sol(ch[0][i],ans);
    }

    sort(ans.begin(),ans.end());

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i+1 < ans.size()) cout << " ";
    }
}