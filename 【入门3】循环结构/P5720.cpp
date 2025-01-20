#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int ans = 1;
    while ( a != 1 ) {
        ans++;
        a = a / 2;
    }
    cout << ans << endl;
    return 0;
}

// 注意初始值