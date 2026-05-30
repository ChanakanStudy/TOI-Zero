#include <iostream>
using namespace std;

int main() {
    char size,type;
    cin >> size >> type;

    int ans = 0;

    if (size == 'S') {
        if (type == 'R') ans = 60;
        else ans = 80;
    }
    else if (size == 'M') {
        if (type == 'R') ans = 80;
        else ans = 100;
    }
    else if (size == 'L') {
        if (type == 'R') ans = 100;
        else ans = 120;
    }

    char top;
    cin >> top;

    if (top != 'N') {
        int n;
        cin >> n;

        if (top == 'P') ans += n*15;
        else if (top == 'E') ans += n*10;
    }

    cout << ans;
}