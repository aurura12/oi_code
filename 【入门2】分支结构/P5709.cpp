#include <iostream>

using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    double res;
    if ( t == 0 ) {
        res = 0;
    } else {
        res = 1.0 * m - 1.0 * s / t;
        if ( res < 0 ) {
            res = 0;
        }
    }
    int ans = res;
    cout << ans << endl;
    return 0;
}

// 条件判断，注意t=0的情况，以及整数的截断