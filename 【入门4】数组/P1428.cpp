#include <iostream>
using namespace std;

int main() {
    int n;
    int a[ 105 ];
    int b[ 105 ] = { 0 };
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a[ i ];
        for ( int j = 0; j < i; j++ ) {
            if ( a[ i ] > a[ j ] ) {
                b[ i ]++;
            }
        }
    }
    for ( int i = 0; i < n; i++ ) {
        cout << b[ i ] << " ";
    }
    cout << endl;
    return 0;
}