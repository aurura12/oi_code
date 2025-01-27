#include <iostream>
using namespace std;

int main() {
    double s;
    cin >> s;
    double sum  = 2.0;
    double step = 2.0;
    int    num  = 1;
    while ( sum < s ) {
        step *= 0.98;
        sum += step;
        num++;
    }
    cout << num << endl;
    return 0;
}