#include <iostream>
using namespace std;

int main() {
    int a[10];
    int ans[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];

        bool check = true;

        for (int j = 0; j < count; j++) {
            if (ans[j] == a[i]) {
                check = false;
            }
        }

        if (check) {
            ans[count] = a[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << ans[i];
        if (i+1 < count) cout << " ";
    }
}