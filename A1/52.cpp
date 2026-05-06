#include <iostream>
using namespace std;

int main() {
    int n , thou=0,fivehun=0,hun=0;
    cin >> n;
    if ((n%10 != 0 || (n/10)%10) != 0 || n>20000 || n<100) {
        cout << "ERROR";
        return 0;
    }
    else {
        if (n>=1000) {
            thou = n/1000;
            n -= thou*1000;
        }
        if (n>=500) {
            fivehun = n/500;
            n -= fivehun*500;
        }
        if (n>=100) {
            hun = n/100;
            n -= hun*100;
        }
    }

    if (thou > 0) {
        cout << "1000 = " << thou << endl;
    }
    if (fivehun > 0) {
        cout << "500 = " << fivehun << endl;
    }
    if (hun > 0) {
        cout << "100 = " << hun;
    }
}