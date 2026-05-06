#include <iostream>
using namespace std;

int main() {
    int n,swap;
    char m;
    cin >> n >> m;
    swap = 10*(n%10)+(n/10);
    if (m == '+') {
        cout << n << " + " << swap << " = " << n+swap;
    }
    else if (m == '*') {
        cout << n << " * " << swap << " = " << n*swap;
    }
}