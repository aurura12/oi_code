#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int    n;
    double sum;
    cin >> n;
    if ( n <= 150 ) {
        sum = 1.0 * n * 0.4463;
    } else if ( n <= 400 ) {
        sum = 150 * 0.4463 + 1.0 * ( n - 150 ) * 0.4663;
    } else {
        sum = 150 * 0.4463 + 250 * 0.4663 + ( n - 400 ) * 0.5663;
    }
    printf( "%.1f\n", sum );
    return 0;
}