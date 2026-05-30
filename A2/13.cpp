#include <iostream>
using namespace std;

int main() {
    char pearl,tea;
    int g,sweet,cc;

    cin >> pearl >> g;
    cin >> tea >> sweet >> cc;

    int ans = 0;

    if (pearl == 'H') ans += g*5;
    else if (pearl == 'O') ans += g*3;
    else if (pearl == 'J') ans += g*2;

    if (tea == 'R') {
        if (sweet == 1) ans += cc*12;
        else if (sweet == 2) ans += cc*18;
        else if (sweet == 3) ans += cc*25;
    }
    else if (tea == 'T') {
        if (sweet == 1) ans += cc*15;
        else if (sweet == 2) ans += cc*20;
        else if (sweet == 3) ans += cc*30;
    }
    else if (tea == 'M') {
        if (sweet == 1) ans += cc*10;
        else if (sweet == 2) ans += cc*15;
        else if (sweet == 3) ans += cc*20;
    }

    cout << ans;
}