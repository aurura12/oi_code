#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double t;
    int    n;
    double res;
    int    num_bottle;
    cin >> t >> n;
    res        = t / n;
    num_bottle = n * 2;
    printf( "%.3f\n%d", res, num_bottle );
    return 0;
}

// 这里需要注意的是格式化输出，用C语言的格式化输出好像更顺手