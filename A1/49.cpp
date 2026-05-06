#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string oldkey;
    cin >> oldkey;
    vector<string> newkey;
    if (oldkey[0] > '5') {
        newkey.push_back("9");
    }
    else if (oldkey[1] > '5') {
        newkey.push_back("10");
    }
    else if (oldkey[2] > '5') {
        newkey.push_back("11");
    }
    else if (oldkey[3] > '5') {
        newkey.push_back("12");
    }
    else if (oldkey[4] > '5') {
        newkey.push_back("14");
    }
    else {
        newkey.push_back("13");
    }
    string tempreverse = oldkey;
    reverse(tempreverse.begin() , tempreverse.end());

    if(oldkey == tempreverse) {
        if(int(oldkey[0]) - 48 + int(oldkey[4]) - 48 > 5) {
            newkey.push_back("1");
        }
        else if (int(oldkey[1]- 48) * (int(oldkey[3])- 48) > 5) {
            newkey.push_back("2");
        }
        else {
            newkey.push_back("0");
        }
    }
    else {
        int a = oldkey[0] - '0';
        int b = oldkey[4] - '0';
        if (b != 0 && a / b > 5) {
            newkey.push_back("1");
        }
        else if ((int(oldkey[1])-48) - (int(oldkey[4])- 48) > 5) {
            newkey.push_back("2");
        }
        else {
            newkey.push_back("0");
        }
    }
    int sumplus=0,summul=1;

    for (int i = 0;i<5;i++) {
        sumplus += int(oldkey[i])-48;
        summul *= int(oldkey[i])-48;
    }
    if (sumplus > 25) {
        newkey.push_back("1");
    }
    else if (summul > 55) {
        newkey.push_back("2");
    }
    else {
        newkey.push_back("0");
    }

    for (auto i = 0;i<newkey.size();i++) {
        cout << newkey[i];
    }

}