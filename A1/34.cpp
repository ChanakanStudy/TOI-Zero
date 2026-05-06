#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count =10e9;
    for (int i =0;i<n;i++) {
        int a;
        cin >> a;
        if (a < count) {
            count = a;
        }
    }
    cout << count;
}