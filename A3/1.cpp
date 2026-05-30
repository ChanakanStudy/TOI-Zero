#include <iostream>
using namespace std;

int n;
int a[1005],l[1005],b[1005],r[1005];

long long dfs(int u,long long &add) {
    long long left,right;

    if (a[u] == 1) left = l[u];
    else left = dfs(l[u],add);

    if (b[u] == 1) right = r[u];
    else right = dfs(r[u],add);

    add += abs(left-right);

    return max(left,right)*2;
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> l[i] >> b[i] >> r[i];
    }

    long long ans = 0;
    dfs(1,ans);

    cout << ans;
}