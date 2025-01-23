#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int temp;
    if ( a > b ) {
        temp = b;
        b    = a;
        a    = temp;
    }
    int a0, b0, c0;
    if ( c < a ) {
        a0 = c;
        b0 = a;
        c0 = b;
    } else if ( c < b ) {
        a0 = a;
        b0 = c;
        c0 = b;
    } else {
        a0 = a;
        b0 = b;
        c0 = c;
    }

    if ( a0 + b0 <= c0 ) {
        cout << "Not triangle" << endl;
    } else {
        if ( a0 * a0 + b0 * b0 == c0 * c0 ) {
            cout << "Right triangle" << endl;
        } else if ( a0 * a0 + b0 * b0 > c0 * c0 ) {
            cout << "Acute triangle" << endl;
        } else {
            cout << "Obtuse triangle" << endl;
        }

        if ( a0 == b0 || a0 == c0 || b0 == c0 ) {
            cout << "Isosceles triangle" << endl;
        }

        if ( a0 == b0 && b0 == c0 ) {
            cout << "Equilateral triangle" << endl;
        }
    }

    return 0;
}
