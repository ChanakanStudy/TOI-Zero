#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin >> n;
    if (n > 200) {
        sum += (n-200)*15;
        sum += 2030;
        cout << sum;
        return 0;
    }
    else if (n > 100) {
        sum += (n-100)*12;
        sum += 830;
        cout << sum;
        return 0;
    }
    else if (n>50) {
        sum += (n-50)*10;
        sum += 330;
        cout << sum;
        return 0;
    }
}