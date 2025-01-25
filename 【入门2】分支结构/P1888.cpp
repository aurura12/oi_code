#include <iostream>
using namespace std;

int gcd( int a, int b ) {
    int r;
    if ( b == 0 )
        return a < 0 ? -a : a;
    while ( ( r = a % b ) != 0 ) {
        a = b;
        b = r;
    }
    return b < 0 ? -b : b;
}

int gcd_three( int a, int b, int c ) {
    int gcd_ab = gcd( a, b );
    int ans    = gcd( gcd_ab, c );
    return ans;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int gcd_abc;
    gcd_abc = gcd_three( a, b, c );
    a       = a / gcd_abc;
    b       = b / gcd_abc;
    c       = c / gcd_abc;
    if ( a > b ) {
        int t;
        t = a;
        a = b;
        b = t;
    }
    if ( a > c ) {
        int t;
        t = a;
        a = c;
        c = t;
    }
    if ( b > c ) {
        int t;
        t = b;
        b = c;
        c = t;
    }
    cout << a << "/" << c << endl;
}