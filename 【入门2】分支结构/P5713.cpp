#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if ( 11 + 3 * n > 5 * n ) {
        cout << "Local" << endl;
    } else {
        cout << "Luogu" << endl;
    }
    return 0;
}