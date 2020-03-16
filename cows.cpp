/*
 * 列举出n的不同情况
 * n=1  n=2  n=3  n=4  n=5  n=6  n=7
 * f1=1 f2=2 f3=3 f4=4 f5=6 f6=9 f7=13
 * 观察上述的式子可以得出递归式 f(n)=f(n-1)+f(n-3)
 * 当n=1  n=2  n=3就单独列出相对应的值*/
#include <iostream>

using namespace std;

int func(int n) {
    if (n < 4) {
        return n;
    } else {
        return func(n - 1) + func(n - 3);
    }
}

int main() {
    int n = 0;
    cin >> n;
    cout << func(n);
}