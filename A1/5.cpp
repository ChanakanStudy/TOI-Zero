#include <bits/stdc++.h>
using namespace std;

int main() {
    int month,day;
    cin >> month >> day;

    if (month == 1 || month == 2 || month == 3) {
        if (month == 3 && day >= 21) {
            cout << "spring";
            return 0;
        }
        cout << "winter";
        return 0;
    }
    else if (month == 4 || month == 5 || month == 6) {
        if (month == 6&& day >= 21) {
            cout << "summer";
            return 0;
        }
        cout << "spring";
        return 0;
    }
    else if (month == 7 || month == 8 || month == 9) {
        if (month == 9&& day >= 21) {
            cout << "fall";
            return 0;
        }
        cout << "summer";
        return 0;
    }

    else if (month == 10 || month == 11 || month == 12) {
        if (month == 12&& day >= 21) {
            cout << "winter";
            return 0;
        }
        cout << "fall";
        return 0;
    }
}