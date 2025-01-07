#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string t;
    cin >> s;
    int length = s.length();
    for ( int i = 0; i < length; i++ ) {
        t.append( 1, s[ length - i - 1 ] );
        // cout << s[ length - i - 1 ] << endl;
    }
    cout << t << endl;
    return 0;
}

// C++里面的字符串挺好用