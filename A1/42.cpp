#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int oldx=0,oldy=0,newx=oldx,newy=oldy;
    for (size_t i =0;i<n.length();i++) {
        if (n[i] == 'W') {
            newx--;
        }
        else if (n[i] == 'E') {
            newx++;
        }
        else if (n[i] == 'N') {
            newy++;
        }
        else {
            newy--;
        }
    }
    int d;
    d = abs(newx-oldx) + abs(newy-oldy);
    cout << newx << " " << newy << " " << d;
}