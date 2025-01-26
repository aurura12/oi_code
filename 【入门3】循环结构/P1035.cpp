#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    int    k;
    cin >> k;
    for ( int i = 1;; i++ ) {
        sum += 1.0 * 1 / i;
        if ( sum > k ) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}