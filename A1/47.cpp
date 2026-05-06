#include <iostream>
using namespace std;

int main() {
    int subject = 0,each,all,min = 0,hour = 0;
    cin >> subject >> each;
    all = each*subject;
    if (all == 0) {
        cout << "No teaching";
        return 0;
    }
    else {
        if (all >= 60) {
            hour = all/60;
            min = all-(hour*60);
            if (min != 0) {
                cout << hour << " hours " << min << " minutes";
            }
            else {
                cout << hour << " hours";
            }
        }
        else {
            cout << all << " minutes";
        }
    }
}