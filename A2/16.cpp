#include <iostream>
using namespace std;

int main() {
    char a,b;
    string x,y;

    cin >> a >> x;
    cin >> b >> y;

    int ans = 0;

    if (a == b && x == y) ans = max(ans,1000000);
    if (x == y) ans = max(ans,100000);

    if (x.substr(3,2) == y.substr(3,2)) {
        if (a == b) ans = max(ans,1000);
        else ans = max(ans,100);
    }

    if (x.substr(2,3) == y.substr(2,3)) {
        if (a == b) ans = max(ans,2000);
        else ans = max(ans,200);
    }

    if (a == b && x != y) ans = max(ans,20);

    cout << ans;
}