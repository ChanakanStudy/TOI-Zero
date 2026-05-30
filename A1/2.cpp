#include <bits/stdc++.h>
using namespace std;

int main() {
    int money , remain;
    remain = 0;
    cin >> money;
    cout << "10 = " << money/10 << endl;
    remain = money%10;
    money -= 10*(money/10);
    cout << "5 = " << money/5<< endl;
    remain = money%5;
    money -= 5*(money/5);
    cout << "2 = " << money/2<< endl;
    remain = money%2;
    money -= 2*(money/2);
    cout << "1 = " << money/1;
    remain = money%1;
}