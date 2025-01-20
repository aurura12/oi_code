#include <iostream>

using namespace std;
int main() {
    int a, b, s, max = 0, i, day = 0;  // a,b是我们津津（以下简称JJ）每天上课时间，s意为sum是上课时间之和
    for ( i = 1; i < 8; i++ )          // i为循环变量，day是JJ一周最不高兴的一天
    {
        cin >> a >> b;  // 输入a,b
        s = a + b;      // 计算一天的上课时间
        if ( ( s > max ) && ( s > 8 ) )
            max = s, day = i;  // 在超过8小时且比之前几天都大的s时，将s赋给最大值，并记录下JJ的这天
    }
    cout << day;  // 由于day初值是0，所以如果JJ一周都开心就输出0
    return 0;
}

// 我自己用数组不知道为什么过不去，最后两个点过不去