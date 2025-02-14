#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    int a[ 1005 ];
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a[ i ];
    }
    double score;
    int    sum = 0;
    sort( a, a + n );
    for ( int i = 1; i < n - 1; i++ ) {
        sum += a[ i ];
    }
    score = 1.0 * sum / ( n - 2 );
    printf( "%.2f\n", score );
    return 0;
}