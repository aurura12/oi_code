#include <iostream>
using namespace std;

int main() {
    int x;
    int flag1, flag2;
    cin >> x;
    if ( x % 2 == 0 ) {
        flag1 = 1;
    } else {
        flag1 = 0;
    }
    if ( x > 4 && x <= 12 ) {
        flag2 = 1;
    } else {
        flag2 = 0;
    }

    int a[ 4 ] = { 0, 0, 0, 0 };
    if ( flag1 == 1 && flag2 == 1 ) {
        a[ 0 ] = 1;
    }
    if ( flag1 == 1 || flag2 == 1 ) {
        a[ 1 ] = 1;
    }
    if ( flag1 + flag2 == 1 ) {
        a[ 2 ] = 1;
    }
    if ( flag1 + flag2 == 0 ) {
        a[ 3 ] = 1;
    }

    cout << a[ 0 ] << " " << a[ 1 ] << " " << a[ 2 ] << " " << a[ 3 ] << endl;
    return 0;
}

// 主要是if语句的条件怎么写更简便