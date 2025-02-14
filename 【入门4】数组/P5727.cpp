#include <iostream>
using namespace std;

int main() {
    int a[ 1000 ];
    int n, i = 1;
    cin >> n;
    a[ 0 ] = n;
    while ( n != 1 ) {
        if ( n % 2 == 1 ) {
            n = n * 3 + 1;
        } else {
            n = n / 2;
        }
        a[ i ] = n;
        i++;
    }
    i--;
    while ( i != -1 ) {
        cout << a[ i ] << " ";
        i--;
    }
    return 0;
}