#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,c;
    cin >> n >> c;

    int win[35][35];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> win[i][j];
        }
    }

    vector<int> team;

    for (int i = 1; i <= n; i++) {
        team.push_back(i);
    }

    bool card = true;

    while (team.size() > 1) {
        vector<int> next;

        for (int i = 0; i < team.size(); i += 2) {
            int a = team[i];
            int b = team[i+1];

            if (a == c && card && win[a][b] != a) {
                next.push_back(a);
                card = false;
            }
            else if (b == c && card && win[a][b] != b) {
                next.push_back(b);
                card = false;
            }
            else {
                next.push_back(win[a][b]);
            }
        }

        team = next;
    }

    cout << team[0];
}