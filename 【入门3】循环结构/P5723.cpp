#include <cmath>
#include <iostream>
using namespace std;

int isPrime( int n ) {
    int i;
    for ( i = 2; i <= sqrt( n ); i++ ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int l, sum = 0, count = 0;
    cin >> l;
    for ( int i = 2;; i++ ) {
        if ( isPrime( i ) ) {
            sum += i;
            if ( sum <= l ) {
                cout << i << endl;
                count++;
            } else {
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}