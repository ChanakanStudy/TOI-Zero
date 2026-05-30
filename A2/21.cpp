#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,k;
int a1[305],a2[305],b1[305],b2[305];

int match(int a[],int b[],int lim) {
    vector<int> x,y;

    for (int i = 0; i < n; i++) {
        x.push_back(a[i]);
        y.push_back(b[i]);
    }

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    int i = 0;
    int j = n-1;
    int cnt = 0;

    while (i < n && j >= 0) {
        if (x[i] + y[j] <= lim) {
            cnt++;
            i++;
            j--;
        }
        else {
            j--;
        }
    }

    return cnt;
}

bool check(int lim) {
    int c1 = match(a1,b1,lim);
    int c2 = match(a2,b2,lim);

    return c1+c2 >= k;
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < n; i++) cin >> a2[i];
    for (int i = 0; i < n; i++) cin >> b1[i];
    for (int i = 0; i < n; i++) cin >> b2[i];

    int left = 1;
    int right = 2000000;
    int ans = right;

    while (left <= right) {
        int mid = (left+right)/2;

        if (check(mid)) {
            ans = mid;
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }

    cout << ans;
}