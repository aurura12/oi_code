#include <iostream>
using namespace std;

int main() {
    int w, x, h, q;
    int a[ 22 ][ 22 ][ 22 ] = {};
    cin >> w >> x >> h >> q;
    int x1, y1, z1, x2, y2, z2;
    for ( int i = 0; i < q; i++ ) {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for ( int j = x1; j <= x2; j++ ) {
            for ( int k = y1; k <= y2; k++ ) {
                for ( int p = z1; p <= z2; p++ ) {
                    a[ j ][ k ][ p ] = 1;
                }
            }
        }
    }
    int sum = 0;
    for ( int i = 1; i <= w; i++ ) {
        for ( int j = 1; j <= x; j++ ) {
            for ( int k = 1; k <= h; k++ ) {
                if ( a[ i ][ j ][ k ] != 1 ) {
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}

// 一定注意循环是从0开始还是从1开始