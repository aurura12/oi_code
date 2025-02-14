#include <iostream>
using namespace std;

int main() {
    int n;
    int prize[ 7 ] = {};
    int ming[ 7 ]  = {};
    int sum        = 0;
    int ans[ 7 ]   = {};
    cin >> n;
    for ( int i = 0; i < 7; i++ ) {
        cin >> prize[ i ];
    }
    while ( n != 0 ) {
        for ( int i = 0; i < 7; i++ ) {
            cin >> ming[ i ];
            for ( int j = 0; j < 7; j++ ) {
                if ( ming[ i ] == prize[ j ] ) {
                    sum++;
                }
            }
        }
        ans[ 7 - sum ]++;
        n--;
        sum = 0;
    }
    for ( int i = 0; i < 7; i++ ) {
        cout << ans[ i ] << " ";
    }
    cout << endl;
    return 0;
}