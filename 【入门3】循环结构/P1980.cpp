#include <iostream>
using namespace std;

int main() {
    int n, x;
    int j = 0;
    cin >> n >> x;
    for ( int i = 1; i <= n; i++ ) {
        int d = i;
        while ( d > 0 ) {
            int c = d % 10;
            d     = d / 10;
            if ( c == x ) {
                j++;
            }
        }
    }
    cout << j << endl;
    return 0;
}

// 对于每一个数字的每一位计数