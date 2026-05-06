#include <iostream>
using namespace std;

int main() {
    int base,bonus,day,sum=0,pri,special;
    cin >> base >> bonus >> day;
    if (day <= 3) {
        sum = base + bonus;
    }
    else {
        sum = (base+bonus)*1.5;
    }

    if (sum >= 1500) {
        pri = 5;
    }
    else if(sum >=1000) {
        pri =4;
    }

    else if(sum >=500) {
        pri =3;
    }

    else if(sum >=200) {
        pri =2;
    }
    else {
        pri =1;
    }

    if (pri == 5 && day>=7) {
        special = 99;
    }
    else if (pri == 4 && bonus > 300) {
        special = 88;
    }
    else {
        special = 0;
    }
    cout << sum << endl << pri << endl << special;
}