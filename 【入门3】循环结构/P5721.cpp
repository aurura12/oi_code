#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pad = 1;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n - i; j++ ) {
            if ( pad < 10 ) {
                cout << "0" << pad;
                pad++;
            } else {
                cout << pad;
                pad++;
            }
        }
        cout << endl;
    }
    return 0;
}