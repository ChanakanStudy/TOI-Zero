#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> roman;
    while (n > 0) {
        if (n >= 1000) {
            if (n%1000 == 3) {
                roman.push_back("MMM");
                n -= 3000;
            }
            else if (n%1000 == 3) {
                roman.push_back("MM");
                n -= 2000;
            }
            else if (n%1000 == 3) {
                roman.push_back("M");
                n -= 1000;
            }
        }
        if (n >= 100) {
            if (n%100 == 9) {
                roman.push_back("CM");
                n -= 900;
            }
            else if (n%100 == 8) {
                roman.push_back("DCCC");
                n -= 800;
            }
            else if (n%100 == 8) {
                roman.push_back("DCCC");
                n -= 800;
            }
            else if (n%100 == 8) {
                roman.push_back("DCCC");
                n -= 800;
            }
            else if (n%100 == 8) {
                roman.push_back("DCCC");
                n -= 800;
            }
            else if (n%100 == 8) {
                roman.push_back("DCCC");
                n -= 800;
            }
            else if (n%100 == 8) {
                roman.push_back("DCCC");
                n -= 800;
            }
            
        }
    }
}