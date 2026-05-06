#include <iostream>
using namespace std;

int main() {
    char status;
    int age,sal,pay=0;
    cin >> status >> age >> sal;
    if (status == 'M' || status == 'B' || status == 'G') {
        if (status == 'M') {
            pay += 1500;
            if (age < 5) {
                pay += (6/100*sal);
            }
            else if (age > 10) {
                pay += (10/100*sal);
            }
            else {
                pay += (8/100*sal);
            }
        }
        else if (status == 'B') {
            pay += 1000;
            if (age < 5) {
                pay += (5/100*sal);
            }
            else if (age > 10) {
                pay += (7/100*sal);
            }
            else {
                pay += (6/100*sal);
            }
        }
        else if (status == 'G') {
            pay += 500;
            if (age < 5) {
                pay += (4/100*sal);
            }
            else if (age > 10) {
                pay += (6/100*sal);
            }
            else {
                pay += (5/100*sal);
            }
        }
    }
    else {
        cout << "0";
        return 0;
    }
    cout << pay;
}