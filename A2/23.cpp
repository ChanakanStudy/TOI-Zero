#include <iostream>
using namespace std;

char low(char c) {
    if (c >= 'A' && c <= 'Z') return c-'A'+'a';
    return c;
}

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        s[i] = low(s[i]);
    }

    bool only = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'i' && s[i] != 't') {
            only = false;
        }
    }

    if (only) {
        cout << "unknown " << s.length();
        return 0;
    }

    int mx = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'r' && s[i] != 'a' && s[i] != 'b' && s[i] != 'i' && s[i] != 't') {
            cout << "no " << i;
            return 0;
        }

        if (s[i] == 'a') {
            if (i == 0 || (s[i-1] != 'r' && s[i-1] != 'a')) {
                cout << "no " << i;
                return 0;
            }
        }

        if (s[i] == 'r') {
            if (i+1 >= s.length() || s[i+1] != 'a') {
                cout << "no " << i+1;
                return 0;
            }
        }

        if (s[i] == 'b') {
            if (i+1 >= s.length() || (s[i+1] != 'i' && s[i+1] != 't')) {
                cout << "no " << i+1;
                return 0;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            count++;
            if (count > mx) mx = count;
        }
        else {
            count = 0;
        }
    }

    cout << "yes " << mx;
}