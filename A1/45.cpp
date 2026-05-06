#include <iostream>
using namespace std;

int main() {
    int n,sum;
    cin >> n;
    if (n<=1) {
        cout << "35";
        return 0;
    }
    else {
        if (n>10) {
            sum += (8*(n-10));
            sum += 50;
            sum += 35;
        }
        else {
            sum += (5*(n-1));
            sum += 35;
        }
    }
    cout << sum;
}