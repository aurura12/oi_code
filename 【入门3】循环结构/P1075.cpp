#include <cmath>
#include <iostream>

using namespace std;

int isPrime( int n ) {
    if ( n == 1 ) {
        return 0;
    }
    for ( int i = 2; i <= sqrt( n ); i++ ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int prime1, prime2;
    cin >> n;
    for ( int i = 2; i < n; i++ ) {
        if ( n % i == 0 && isPrime( i ) ) {
            prime1 = i;
            break;
        }
    }
    prime2 = n / prime1;
    cout << prime2 << endl;
    return 0;
}