#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int score[ 10005 ][ 4 ];
    for ( int i = 0; i < n; i++ ) {
        cin >> score[ i ][ 0 ] >> score[ i ][ 1 ] >> score[ i ][ 2 ];
        score[ i ][ 3 ] = score[ i ][ 0 ] + score[ i ][ 1 ] + score[ i ][ 2 ];
    }
    int sum = 0;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = i + 1; j < n; j++ ) {
            if ( abs( score[ i ][ 0 ] - score[ j ][ 0 ] ) <= 5 && abs( score[ i ][ 1 ] - score[ j ][ 1 ] ) <= 5 && abs( score[ i ][ 2 ] - score[ j ][ 2 ] ) <= 5 ) {
                if ( abs( score[ i ][ 3 ] - score[ j ][ 3 ] ) <= 10 ) {
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}