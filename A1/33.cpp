#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count =0;
    for (int i =0;i<n;i++) {
        char a;
        cin >> a;
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            count++;
        }
    }
    cout << count;
}