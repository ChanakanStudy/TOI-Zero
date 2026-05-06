#include <iostream>
using namespace std;

int main() {
    int n, sum = 0 ;
    cin >>n;
    while(true) {
        if (n == 0) {
            break;
        }
        sum += (n*n);
        n--;
    }
    cout << sum;
}