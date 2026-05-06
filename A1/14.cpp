#include <iostream>
using namespace std;

int main() {
    int a,b,c, min = 10e9;
    cin >> a >> b >> c;
    if (a < min) {
        min = a;
    }
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    cout << min;
}