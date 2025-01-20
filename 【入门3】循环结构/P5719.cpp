#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, k;
    int sum1 = 0, sum2 = 0;
    int count1 = 0, count2 = 0;
    cin >> n >> k;
    for ( int i = 1; i <= n; i++ ) {
        if ( i % k == 0 ) {
            sum1 += i;
            count1++;
        } else {
            sum2 += i;
            count2++;
        }
    }
    double ans1, ans2;
    ans1 = 1.0 * sum1 / count1;
    ans2 = 1.0 * sum2 / count2;
    printf( "%.1f %.1f", ans1, ans2 );
    return 0;
}