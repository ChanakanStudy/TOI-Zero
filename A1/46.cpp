#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> stock;
    for (int i =0 ;i<n;i++) {
        int a;
        cin >> a;
        stock.push_back(a);
    }
    int sum=0 , even=0,odd=0;
    for (int i = 0;i<n;i++) {
        sum += stock[i];
        if (stock[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "SUM " << sum << endl;
    cout << "EVEN " << even << endl;
    cout << "ODD " << odd;
}