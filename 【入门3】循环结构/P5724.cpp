#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int a[ 1005 ];
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a[ i ];
    }
    sort( a, a + n );
    cout << a[ n - 1 ] - a[ 0 ];
    return 0;
}