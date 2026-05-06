#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> number;
    int even = 0,odd = 0;
    for (int i = 0 ;i<3;i++) {
        int a;
        cin >> a;
        number.push_back(a);
    }

    for (int i = 0;i<3;i++) {
        if (number[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "even " << even << endl;
    cout << "odd " << odd;
}