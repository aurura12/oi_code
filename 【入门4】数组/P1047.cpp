#include <iostream>
using namespace std;

int main() {
    int l, m;
    int road[ 10005 ] = {};
    int start[ 105 ];
    int end[ 105 ];
    cin >> l >> m;
    for ( int i = 0; i < m; i++ ) {
        cin >> start[ i ] >> end[ i ];
    }
    for ( int i = 0; i < m; i++ ) {
        for ( int j = start[ i ]; j <= end[ i ]; j++ ) {
            road[ j ] = 1;
        }
    }
    int flag = 0;
    for ( int i = 0; i <= l; i++ ) {
        if ( road[ i ] != 1 ) {
            flag++;
        }
    }
    cout << flag << endl;
    return 0;
}