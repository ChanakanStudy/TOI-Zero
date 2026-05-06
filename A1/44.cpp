#include <iostream>
using namespace std;

int main() {
    int age,price;
    string day;
    cin >> age >> day;
    if (age<5) {
        cout << "0";
        return 0;
    }
    else if (age<19) {
        price = 100;
    }
    else {
        price = 150;
    }

    if (day == "Wed") {
        price /= 2;
    }
    cout << price;
}