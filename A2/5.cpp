#include <iostream>
#include <vector>
using namespace std;

int main() {
    int w,h,m,n;
    cin >> w >> h >> m >> n;

    vector<int> x,y;
    x.push_back(0);
    y.push_back(0);

    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        x.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        y.push_back(a);
    }

    x.push_back(w);
    y.push_back(h);

    long long mx1 = 0,mx2 = 0;

    for (int i = 1; i < x.size(); i++) {
        for (int j = 1; j < y.size(); j++) {
            long long area = 1LL*(x[i]-x[i-1])*(y[j]-y[j-1]);

            if (area >= mx1) {
                mx2 = mx1;
                mx1 = area;
            }
            else if (area > mx2) {
                mx2 = area;
            }
        }
    }

    cout << mx1 << " " << mx2;
}