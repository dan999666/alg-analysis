/*
 * 引用和指针在函数中的应用的两个经典例子
 * */
#include <iostream>
using namespace std;

// 函数声明
void swap(int& x, int& y);
void swap1(int *x,int *y);
int main ()
{
    // 局部变量声明
    int a = 100;
    int b = 200;

    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;

    /* 调用函数来交换值 */
//    swap(a, b);
        swap1(&a,&b);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;

    return 0;
}

// 函数定义
void swap(int& x, int& y)
{
    int temp;
    temp = x; /* 保存地址 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y  */

    return;
}

void swap1(int *x,int *y){
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}