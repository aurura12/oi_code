#include <iostream>
using namespace std;

int main() {
    int  year;
    bool flag = 0;
    cin >> year;
    if ( year % 100 == 0 ) {
        if ( year % 400 == 0 ) {
            flag = 1;
        }
    } else {
        if ( year % 4 == 0 ) {
            flag = 1;
        }
    }

    if ( flag ) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
