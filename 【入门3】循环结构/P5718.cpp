#include <iostream>
using namespace std;

int main() {
    int n;
    int a, min;
    min = 1001;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a;
        if ( a < min ) {
            min = a;
        }
    }
    cout << min << endl;
    return 0;
}