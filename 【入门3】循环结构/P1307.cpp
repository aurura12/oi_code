#include <iostream>
using namespace std;
long long int hw( long long int n ) {
    long long int sum = 0;
    while ( n != 0 ) {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long int n;
    cin >> n;
    cout << hw( n );
    return 0;
}