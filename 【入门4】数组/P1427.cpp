#include <iostream>
using namespace std;

int main() {
    long long int a[ 102 ];
    int           temp, n = 0;
    cin >> temp;
    while ( temp != 0 ) {
        a[ n ] = temp;
        n++;
        cin >> temp;
    }
    for ( int i = n - 1; i >= 0; i-- ) {
        cout << a[ i ] << " ";
    }
    cout << endl;
    return 0;
}