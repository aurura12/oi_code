#include <iostream>
using namespace std;

int main() {
    int k;
    int sum = 0;
    cin >> k;
    int days = 0;
    for ( int i = 1;; i++ ) {
        for ( int j = 1; j <= i; j++ ) {
            sum += i;
            days++;
            if ( days == k ) {
                break;
            }
        }
        if ( days == k ) {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}