#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    for (int i = n.length()-1;i >= 0;i--) {
        if(n[i] >= 'A' && n[i] <= 'Z') {
            n[i] = n[i]+32;
            cout << n[i];
        }
        else {
            cout << n[i];
        }
    }
}