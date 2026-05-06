#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    char temp;
    temp = n[0];
    int count = 1;

    for (int i = 1; i < n.length(); i++) {
        if (n[i] == temp) {
            count++;
        } 
        else {
            cout << count << temp;
            temp = n[i];
            count = 1;
        }
    }

cout << count << temp;
}