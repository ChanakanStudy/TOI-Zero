#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> roomkey;
    int even=0,odd=0;
    while(true) {
        int a;
        cin >> a;
        if (a<0) {
            break;
        }
        roomkey.push_back(a);
    }
    for(size_t i=0;i<roomkey.size();i++) {
        if(roomkey[i] % 2 ==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << odd << " " << even << " " << even+odd;
}