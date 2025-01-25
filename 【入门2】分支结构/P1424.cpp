#include <iostream>
using namespace std;

int main() {
    unsigned long long n, ans = 0;
    int                x;
    cin >> x >> n;
    for ( int i = 0; i < n; i++ ) {
        if ( x != 6 && x != 7 ) {
            ans += 250;
        }
        x++;
        if ( x == 8 ) {
            x = 1;
        }
    }
    cout << ans << endl;
    return 0;
}

// 注意数据范围就行