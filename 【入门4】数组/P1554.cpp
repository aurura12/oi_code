#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[ 10 ] = {};
    for ( int i = m; i <= n; i++ ) {
        int j = i;
        while ( j ) {
            a[ j % 10 ]++;
            j /= 10;
        }
    }
    for ( int i = 0; i < 10; i++ ) {
        cout << a[ i ] << " ";
    }
    return 0;
}