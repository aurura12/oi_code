#include <cmath>
#include <iostream>
using namespace std;

int isPrime( int n ) {
    int i;
    if ( n % 2 == 0 ) {
        return 0;
    }
    for ( i = 2; i <= sqrt( n ); i++ ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int hw( int n ) {
    int sum = 0;
    int k   = n;
    while ( n != 0 ) {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if ( sum == k )  // 判断是否回文
        return 1;
    else
        return 0;
}

int main() {
    int n, sum = 0, m;
    cin >> n >> m;
    for ( int i = n; i <= m; i++ ) {
        if ( i == 9989900 )
            break;
        if ( hw( i ) && isPrime( i ) )
            cout << i << endl;
    }
    return 0;
}