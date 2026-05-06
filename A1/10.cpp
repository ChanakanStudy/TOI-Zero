#include <iostream>
using namespace std;

int main() {
    int a;
    char b;

    cin >> a>> b;
    if (a < 18 || b == 's' || b == 'S') {
        cout << "20";
    }
    else {
        cout << "50";
    }
}