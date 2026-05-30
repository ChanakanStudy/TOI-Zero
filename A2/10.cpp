#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
    int h,id;
};

int parent[100005];
long long sz[100005];
bool use[100005];

int findroot(int x) {
    if (parent[x] == x) return x;
    return parent[x] = findroot(parent[x]);
}

int main() {
    int n,q;
    cin >> n >> q;

    vector<int> h(n),l(n);
    vector<node> v;

    int dep = 0;
    int mxh = 0;

    for (int i = 0; i < n; i++) {
        int d;
        cin >> d >> l[i];

        dep += d;
        h[i] = dep;
        mxh = max(mxh,dep);

        v.push_back({h[i],i});
    }

    sort(v.begin(),v.end(),[](node a,node b) {
        return a.h > b.h;
    });

    vector<long long> best(mxh+2,0);

    for (int i = 0; i < n; i++) {
        parent[i] = i;
        sz[i] = l[i];
    }

    long long now = 0;
    int p = 0;

    for (int level = mxh; level >= 1; level--) {
        while (p < n && v[p].h >= level) {
            int id = v[p].id;
            use[id] = true;
            now = max(now,sz[id]);

            if (id-1 >= 0 && use[id-1]) {
                int a = findroot(id);
                int b = findroot(id-1);

                if (a != b) {
                    parent[b] = a;
                    sz[a] += sz[b];
                    now = max(now,sz[a]);
                }
            }

            if (id+1 < n && use[id+1]) {
                int a = findroot(id);
                int b = findroot(id+1);

                if (a != b) {
                    parent[b] = a;
                    sz[a] += sz[b];
                    now = max(now,sz[a]);
                }
            }

            p++;
        }

        best[level] = now;
    }

    while (q--) {
        long long x;
        cin >> x;

        int ans = 0;
        int left = 1,right = mxh;

        while (left <= right) {
            int mid = (left+right)/2;

            if (best[mid] >= x) {
                ans = mid;
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }

        cout << ans << endl;
    }
}