#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 1;
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            if ( m < 10 ) {
                cout << "0" << m;
            } else {
                cout << m;
            }
            m++;
        }
        cout << endl;
    }
    cout << endl;
    m = 1;
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            if ( j <= ( n - i ) ) {
                cout << "  ";
            } else {
                if ( m < 10 ) {
                    cout << "0" << m;
                } else {
                    cout << m;
                }
                m++;
            }
        }
        cout << endl;
    }
    return 0;
}