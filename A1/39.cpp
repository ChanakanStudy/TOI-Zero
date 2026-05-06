#include <iostream>
using namespace std;

int main() {
    int n,fac;
    cin >> n;
    fac = 1;
    for (int i = n;i >= 1;i--) {
        fac *= i;
    }
    cout << fac;
}