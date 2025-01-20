#include <iostream>
using namespace std;

int getMonthDay( int month ) {
    int days;
    if ( month == 2 ) {
        days = 28;
    } else if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) {
        days = 31;
    } else {
        days = 30;
    }
    return days;
}

int isSpecialYear( int year ) {
    int flag = 0;
    if ( year % 100 != 0 ) {
        if ( year % 4 == 0 ) {
            flag = 1;
        }
    } else {
        if ( year % 400 == 0 ) {
            flag = 1;
        }
    }
    return flag;
}

int main() {
    int y, m;
    cin >> y >> m;
    int ans;
    if ( m == 2 ) {
        int flag = isSpecialYear( y );
        if ( flag == 1 ) {
            ans = 29;
        } else {
            ans = 28;
        }
    } else {
        ans = getMonthDay( m );
    }
    cout << ans << endl;
    return 0;
}