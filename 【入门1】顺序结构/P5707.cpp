#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;

    int t, alltime, resttime;
    t        = ceil( 1.0 * s / v ) + 10;
    alltime  = 24 * 60 * 60;
    resttime = alltime - t;

    int hour, min;
    if ( ceil( 1.0 * t / 60 ) > 8 ) {
        hour = 24 + 8 - ceil( 1.0 * t / 60 );
    } else {
        hour = 8 - ceil( 1.0 * t / 60 );
    }
    min = resttime % 60;

    if ( hour >= 10 ) {
        if ( min >= 10 ) {
            cout << hour << ":" << min << endl;

        } else {
            cout << hour << ":" << "0" << min << endl;
        }
    } else {
        if ( min >= 10 ) {
            cout << "0" << hour << ":" << min << endl;

        } else {
            cout << "0" << hour << ":" << "0" << min << endl;
        }
    }
    return 0;
}

// 注意读题，小时和分钟数都需要补0