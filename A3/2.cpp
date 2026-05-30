#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int id(int r,int p) {
    return (r-1)*(r-1)+p;
}

int main() {
    int n;
    cin >> n;

    int maxr = 1;

    while (maxr*maxr < n) {
        maxr++;
    }

    int mx = maxr*maxr;

    int dis[100505];

    for (int i = 0; i <= mx; i++) {
        dis[i] = -1;
    }

    queue<pair<int,int> > q;

    dis[1] = 0;
    q.push({1,1});

    while (!q.empty()) {
        int r = q.front().first;
        int p = q.front().second;
        q.pop();

        int now = id(r,p);

        int nr,np,nid;

        if (p > 1) {
            nr = r;
            np = p-1;
            nid = id(nr,np);

            if (nid <= mx && dis[nid] == -1) {
                dis[nid] = dis[now]+1;
                q.push({nr,np});
            }
        }

        if (p < 2*r-1) {
            nr = r;
            np = p+1;
            nid = id(nr,np);

            if (nid <= mx && dis[nid] == -1) {
                dis[nid] = dis[now]+1;
                q.push({nr,np});
            }
        }

        if (p%2 == 0 && r > 1) {
            nr = r-1;
            np = p-1;
            nid = id(nr,np);

            if (nid <= mx && dis[nid] == -1) {
                dis[nid] = dis[now]+1;
                q.push({nr,np});
            }
        }

        if (p%2 == 1 && r < maxr) {
            nr = r+1;
            np = p+1;
            nid = id(nr,np);

            if (nid <= mx && dis[nid] == -1) {
                dis[nid] = dis[now]+1;
                q.push({nr,np});
            }
        }
    }

    cout << dis[n];
}