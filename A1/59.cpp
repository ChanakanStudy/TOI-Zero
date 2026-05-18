#include <iostream>
using namespace std;

int main() {
    int n;
    string start,end;
    cin >> start >> end >> n;

    if (start == "BKK" && end == "CNX") {
        cout << n*30+10;
    }
    else if (start == "CNX" && end == "UBP") {
        cout << n*40+15;
    }
    else if (start == "UBP" && end == "BKK") {
        cout << n*40+20;
    }
    else if (start == "BKK" && end == "PKT") {
        cout << n*50+25;
    }
    else if (start == "PKT" && end == "CNX") {
        cout << n*60+30;
    }
    else if (start == "UBP" && end == "PKT") {
        cout << n*70+40;
    }
    else {
        cout << "Error";
    }
}