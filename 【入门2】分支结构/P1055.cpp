#include <iostream>
using namespace std;

int main() {
    char s[ 13 ];
    cin >> s;
    int a[ 9 ];
    a[ 0 ] = s[ 0 ] - '0';
    for ( int i = 1; i < 4; i++ ) {
        a[ i ] = s[ i + 1 ] - '0';
    }
    for ( int i = 4; i < 9; i++ ) {
        a[ i ] = s[ i + 2 ] - '0';
    }

    int sum = 0;
    for ( int i = 0; i < 9; i++ ) {
        sum += a[ i ] * ( i + 1 );
    }
    if ( ( sum % 11 ) == 10 ) {
        if ( s[ 12 ] == 'X' ) {
            cout << "Right" << endl;
        } else {
            s[ 12 ] = 'X';
            cout << s << endl;
        }
    } else {
        if ( ( sum % 11 ) == ( s[ 12 ] - '0' ) ) {
            cout << "Right" << endl;
        } else {
            s[ 12 ] = '0' + ( sum % 11 );
            cout << s << endl;
        }
    }
    return 0;
}