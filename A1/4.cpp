#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a<5 || b<20 || c<25) {
        cout << "fail";
    }
    else {
        cout << "pass";
    }  
}