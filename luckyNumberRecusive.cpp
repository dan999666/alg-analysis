/*
将计算十进制和二进制的情况独立成两个函数，
 幸运数的个数用一个递归函数进行结果的输出，
 具体的幸运数在主函数用一个循环进行输出
*/

#include<iostream>
using namespace std;

int number = 0;
int couter = 1;


//计算十进制情况
int f(int x) {
    long int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

//计算二进制情况
int g(int x) {
    long int sum = 0;
    while (x != 0) {
        sum += x % 2;
        x = x / 2;
    }
    return sum;
}

int G(int x) {

    if (x == 0) {//递归结束条件
        return number;
    }
    if (f(x) == g(x)) { //当二进制函数等于十进制函数 number加一
        number += 1;
    }
    G(x - 1);

    return number;
}

int main() {
    int x = 0;
    cin >> x;
    if (x < 100000) {
//  输出满足情况的幸运数
        while (couter <= x) {
            if (f(couter) == g(couter)) {
                cout << couter << " ";
            } else {
                cout << "";
            }
            couter++;
        }
        cout << "\n";
//    输出符合条件的个数
        cout << G(x);
    } else {
        cout << "";
    }
    return 0;
}