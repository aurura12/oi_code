#include <cmath>
#include <iostream>
#include <ostream>
using namespace std;

int main() {
    int h, r;
    cin >> h >> r;
    double v;
    v = 3.14 * 1.0 * r * r * h / 1000.0;
    int ans;
    ans = ceil( 20.0 / v );
    cout << ans << endl;
    return 0;
}