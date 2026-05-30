#include <iostream>
using namespace std;

bool love(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c-'A'+'a';
    }

    if (c == 'l' || c == 'o' || c == 'v' || c == 'e') {
        return true;
    }

    return false;
}

int main() {
    string a,b;
    cin >> a >> b;

    int i = 0;

    while (a.length() < b.length()) {
        a += a[i];
        i++;
    }

    i = 0;

    while (b.length() < a.length()) {
        b += b[i];
        i++;
    }

    string ans = "";
    int count = 0;

    for (int i = 0; i < a.length(); i++) {
        if (love(a[i]) || love(b[i])) {
            ans += 'w';
            count++;
        }
        else {
            ans += '$';
        }
    }

    if (count%2 == 1) {
        int mx = 0;
        int now = 0;

        for (int i = 0; i < ans.length(); i++) {
            if (ans[i] == 'w') {
                now++;
                if (now > mx) mx = now;
            }
            else {
                now = 0;
            }
        }

        ans += char(mx+'0');
    }
    else {
        bool check = false;

        for (int i = 1; i < ans.length(); i++) {
            if (ans[i] == 'w' && ans[i-1] == 'w') {
                check = true;
            }
        }

        if (!check) {
            ans += '#';
        }
    }

    cout << ans;
}