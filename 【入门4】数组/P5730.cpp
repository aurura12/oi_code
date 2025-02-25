#include <iostream>
using namespace std;

char W[ 10 ][ 5 ][ 3 ] =  // W[i][j][k]表示第i个数字的第j行的第k列，
    { {
          // 0
          'X',
          'X',
          'X',
          'X',
          '.',
          'X',
          'X',
          '.',
          'X',
          'X',
          '.',
          'X',
          'X',
          'X',
          'X',
      },
      {
          // 1
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
      },
      {
          // 2
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
      },
      {
          // 3
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
          'X',
      },
      {
          // 4
          'X',
          '.',
          'X',
          'X',
          '.',
          'X',
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
      },
      {
          // 5
          'X',
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
          'X',
      },
      {
          // 6
          'X',
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
          'X',
          '.',
          'X',
          'X',
          'X',
          'X',
      },
      {
          // 7
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
          '.',
          '.',
          'X',
      },
      {
          // 8
          'X',
          'X',
          'X',
          'X',
          '.',
          'X',
          'X',
          'X',
          'X',
          'X',
          '.',
          'X',
          'X',
          'X',
          'X',
      },
      {
          // 9
          'X',
          'X',
          'X',
          'X',
          '.',
          'X',
          'X',
          'X',
          'X',
          '.',
          '.',
          'X',
          'X',
          'X',
          'X',
      } };

int main() {
    int  n;
    char s[ 110 ];
    cin >> n;  // 输入n
    for ( int i = 0; i < n; i++ ) {
        cin >> s[ i ];  // 输入要打印的字符
    }
    for ( int i = 0; i < 5; i++ ) {                   // 枚举每一行
        for ( int j = 0; j < n; j++ ) {               // 枚举每一个数字
            for ( int k = 0; k < 3; k++ ) {           // 枚举每个数字的列
                cout << W[ s[ j ] - '0' ][ i ][ k ];  // 输出
            }
            if ( j != n - 1 )
                cout << '.';  // 如果最后一列，就不需要打印'.'
        }
        cout << endl;  // 换行
    }
    return 0;
}

// 注意枚举的顺序，先枚举行，再枚举数字，最后枚举列