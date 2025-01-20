#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int temp;
    cin >> a >> b >> c;
    if ( a > b ) {
        temp = b;
        b    = a;
        a    = temp;
    }
    if ( c < a ) {
        cout << c << " " << a << " " << b << endl;
    } else if ( c < b ) {
        cout << a << " " << c << " " << b << endl;
    } else {
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
