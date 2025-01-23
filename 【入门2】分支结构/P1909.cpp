#include <cstdio>
#define MAXSIZE 10000000
int main() {
    int n;
    int num[ 3 ];
    int price[ 3 ];
    scanf( "%d", &n );
    scanf( "%d%d%d%d%d%d", &num[ 0 ], &price[ 0 ], &num[ 1 ], &price[ 1 ], &num[ 2 ], &price[ 2 ] );
    int sum, sumFlag = MAXSIZE;
    for ( int i = 0; i < 3; ++i ) {
        sum = ( n + num[ i ] - 1 ) / num[ i ] * price[ i ];
        if ( sum < sumFlag )
            sumFlag = sum;
    }
    printf( "%d", sumFlag );
    return 0;
}