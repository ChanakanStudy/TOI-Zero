#include <iostream>
using namespace std;

int main() {
    int w,l,n,price;
    cin >> w >> l >> n;
    cin >> price;

    int len = 2*(w+l)*n;

    cout << len << endl;
    cout << len*price;
}