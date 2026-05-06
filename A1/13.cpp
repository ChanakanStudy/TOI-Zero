#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    bool al = true , code = true;
    cin >> a >> b;
    if (a != 'H') {
        al = false;
    }
    if (b != 4567) {
        code = false;
    }

    if (al == true && code == true) {
        cout << "safe unlocked";
    }
    else if (al == false && code == true) {
        cout << "safe locked - change char";
    }
    else if (al == true && code == false) {
        cout << "safe locked - change digit";
    }
    else {
        cout << "safe locked";
    }
}