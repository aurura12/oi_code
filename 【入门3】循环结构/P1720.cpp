#include <iostream>
using namespace std;

int main() {
    long long int fibo[ 49 ];
    fibo[ 0 ] = 0;
    fibo[ 1 ] = 1;
    fibo[ 2 ] = 1;
    for ( int i = 3; i <= 48; i++ ) {
        fibo[ i ] = fibo[ i - 1 ] + fibo[ i - 2 ];
    }
    int n;
    cin >> n;
    cout << fibo[ n ] << ".00" << endl;
    return 0;
}

// 注意用int可能会超范围