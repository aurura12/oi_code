#include <iostream>
using namespace std;

int main() {
    int a[ 50 ][ 50 ] = {};
    int n;
    cin >> n;
    int x = 1, y = 0;
    y = n / 2 + 1;
    for ( int k = 1; k <= n * n; k++ ) {
        a[ x ][ y ] = k;
        if ( ( x == 1 && y == n ) || a[ x - 1 ][ y + 1 ] ) {
            x++;
        } else if ( x == 1 ) {
            x = n;
            y++;
        } else if ( y == n ) {
            x--;
            y = 1;
        } else {
            x--;
            y++;
        }
    }
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            cout << a[ i ][ j ] << " ";
        }
        cout << endl;
    }
    return 0;
}