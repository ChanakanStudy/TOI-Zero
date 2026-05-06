#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n%10 != 0) {
        n--;
    }
    while (n>=0) {
        cout << n << " ";
        n -= 10;
    }
}