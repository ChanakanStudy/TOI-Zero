#include <iostream>
#include <vector>
using namespace std;

int main() {
    string oldpass;
    int n , remain;
    vector<string> newpass;
    cin >> oldpass >> n;
    remain = n%26;
    for (int i =0;i<oldpass.length();i++)
        if(oldpass[i] + remain > 'z') {
            int remainwalk=0;
            remainwalk = 'z' - oldpass[i];
            newpass.push_back(char('a' + remainwalk));
        }
}