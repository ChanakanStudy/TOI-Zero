#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> menu;
    while(true) {
        int a;
        cin >> a;
        if (a == 5) {
            break;
        }
        menu.push_back(a);
    }

    cout << "Bye Bye" << endl;
    int sum =0;
    for (size_t i =0; i<menu.size() ;i++) {
        if (menu[i] == 1) {
            sum += 100;
        }
        else if (menu[i] == 2) {
            sum += 120;
        }
        else if (menu[i] == 3) {
            sum += 200;
        }
        else if (menu[i] == 4) {
            sum += 60;
        }
    }

    cout << "Total Calories: " << sum;
}