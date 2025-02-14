#include <iostream>
#include <stdio.h>

int main() {
    int x, k, n;
    std::cin >> n;
    for ( x = 100; x >= 0; x-- ) {
        for ( k = 1; k < 100000; ++k ) {
            if ( ( 7 * x + 21 * k ) * 52 == n ) {
                break;
            }
        }
        if ( ( 7 * x + 21 * k ) * 52 == n ) {
            break;
        }
    }
    printf( "%d\n%d", x, k );
    return 0;
}