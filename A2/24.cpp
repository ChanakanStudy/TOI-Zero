#include <iostream>
using namespace std;

int main() {
    int l,p;
    cin >> l >> p;

    int jump[3];
    cin >> jump[0] >> jump[1] >> jump[2];

    int score[3] = {};

    for (int i = 0; i < p; i++) {
        int pos,point;
        cin >> pos >> point;

        for (int j = 0; j < 3; j++) {
            if (pos%jump[j] == 0) {
                score[j] += point;
            }
        }
    }

    int mx = max(score[0],max(score[1],score[2]));

    if (score[0] == mx) cout << "Rabbit " << mx << endl;
    if (score[1] == mx) cout << "Monkey " << mx << endl;
    if (score[2] == mx) cout << "Frog " << mx << endl;
}