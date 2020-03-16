/*设计一个算法，采用分治法求x^n。
【输入形式】一个正整数x和正整数n，中间用一个空格隔开。
【输出形式】一个整数，表示x的n次幂。
【样例输入】2 3
【样例输出】8
 x^n可以简化为X^(n/2)*X^(n/2)两个子问题，
 当n=0时，结果为1.0，为递归出口
 */
#include <iostream>

using namespace std;

double pow(double x, long long n) {
    if (n == 0) {   //递归出口
        return 1.0;
    }
    int half = pow(x, n / 2);
    if (n % 2 == 0) {   // n为偶数
        return half * half;
    } else {            // n为奇数
        return half * half * x;
    }
}

int main() {

    /* for 循环让x和自己相乘n次
     * int x = 0, n = 0, result = 1;
     * cin >> x >> n;
     * for (int i = 1; i <= n; i++) {
     * result = result * x;
     * }
     * cout << result;
     * */
     double x=0;
     long long n=0;
     cin >> x >> n;
     int result = pow(x,n);
     cout << result;
}