#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int over = 0;
    string name,mxname;
    int w,mx = -1;

    for (int i = 0; i < n; i++) {
        cin >> name >> w;

        if (w > 15) {
            over++;
        }

        if (w > mx) {
            mx = w;
            mxname = name;
        }
    }

    cout << over << endl;
    cout << mxname << " " << mx;
}