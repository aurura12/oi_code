#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int money, ans;
    money = a * 10 + b;
    ans   = money / 19;
    cout << ans << endl;
    return 0;
}
