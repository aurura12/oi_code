#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    double s, p;
    cin >> a >> b >> c;
    p = 1.0 * ( a + b + c ) / 2.0;
    s = sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) );
    printf( "%.1f", s );
    return 0;
}

// 这个题一开始WA了，问题是没有认真看题，把a,b,c 当作整数了，题目上说的是实数