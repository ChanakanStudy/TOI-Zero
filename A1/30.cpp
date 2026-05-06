#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> count1;
    vector<int> count2;
    vector<int> collect;
    int n;
    cin >>n;
    
    for (int i = 0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        count1.push_back(a);
        count2.push_back(b);
    }

    for (size_t i = 0;i<count1.size();i++) {
        if (count1[i] >= count2[i]) {
            collect.push_back(count1[i]);
        }
        else {
            collect.push_back(count2[i]);
        }
    }
    int sum = 0;
    for (size_t i = 0;i<collect.size();i++) {
        sum += collect[i];
        if (i == collect.size()-1) {
            cout << collect[i];
            break;
        }
        cout << collect[i] << " + ";
    }
    if (collect.size() == 1) {
        return 0;
    }
    cout << " = " << sum;
}