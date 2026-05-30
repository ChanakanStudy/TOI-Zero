#include <iostream>
using namespace std;

char low(char c) {
    if (c >= 'A' && c <= 'Z') return c-'A'+'a';
    return c;
}

int main() {
    string s;
    cin >> s;

    int mx = 0;

    for (int i = 0; i < s.length(); i++) {
        if (low(s[i]) == 'b') {
            int cnt = 0;

            for (int j = i+1; j < s.length(); j++) {
                if (low(s[j]) == 'u') cnt++;
                else break;
            }

            if (cnt >= 2 && cnt > mx) {
                mx = cnt;
            }
        }
    }

    if (mx > 0) {
        cout << "Yes " << mx;
        return 0;
    }

    int pos = -1;

    for (int i = 0; i < s.length(); i++) {
        if (low(s[i]) == 'b') {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        for (int i = pos+1; i < s.length(); i++) {
            s[i] = 'U';
        }
        cout << s;
    }
    else {
        string t = "BUU";
        for (int i = 0; i < s.length(); i++) {
            cout << t[i%3];
        }
    }
}