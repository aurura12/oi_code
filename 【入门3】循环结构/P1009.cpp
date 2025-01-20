#include <iostream>
#include <string>

using namespace std;

int    num;  // 输入的数
string ans;  // 输出的数

// 高精度加法
string ADD( string a, string b ) {
    string result;  // 结果

    // 将较大的数赋值给a，较小的数赋值给b
    if ( b.length() > a.length() ) {
        string temp = a;
        a           = b;
        b           = temp;
    }
    int a_len = a.length();
    int b_len = b.length();
    // b补足零，方便计算
    for ( int i = 0; i < a_len - b_len; i++ ) {
        b = '0' + b;
    }

    int num;     // 本位
    int up = 0;  // 进位
    // 模拟加法
    for ( int i = a_len - 1; i >= 0; i-- ) {
        int num = ( a[ i ] - '0' ) + ( b[ i ] - '0' ) + up;
        up      = num / 10;
        num %= 10;
        result = ( char )( num + '0' ) + result;
    }
    // 若仍有进位，加上进位
    if ( up ) {
        result = ( char )( up + '0' ) + result;
    }

    return result;
}

// 高精度乘法
string MUL( string a, string b ) {
    string result;  // 结果
    int    a_len = a.length();
    int    b_len = b.length();
    int    num;     // 本位
    int    up = 0;  // 进位
    // 模拟乘法
    for ( int i = a_len - 1; i >= 0; i-- ) {
        string temp;
        for ( int j = b_len - 1; j >= 0; j-- ) {
            num = ( a[ i ] - '0' ) * ( b[ j ] - '0' ) + up;
            up  = num / 10;
            num %= 10;
            temp = ( char )( num + '0' ) + temp;
        }
        // 若仍有进位，加上进位，记得清零
        if ( up ) {
            temp = ( char )( up + '0' ) + temp;
            up   = 0;
        }
        // 乘以每位的权重10^k
        for ( int k = 0; k < ( a_len - 1 ) - i; k++ ) {
            temp += '0';
        }
        result = ADD( result, temp );
    }

    return result;
}

// 高精度阶乘
string FAC( int n ) {
    string result = "1";

    for ( int i = 1; i <= n; i++ ) {
        // 数字转化为字符串
        string a;
        int    temp = i;
        while ( temp ) {
            a = ( char )( temp % 10 + '0' ) + a;
            temp /= 10;
        }
        result = MUL( result, a );
    }

    return result;
}

int main( void ) {
    cin >> num;

    for ( int i = 1; i <= num; i++ ) {
        ans = ADD( ans, FAC( i ) );
    }

    cout << ans;

    return 0;
}

// 这个是题解里面算法比较清晰的代码，需要好好理解