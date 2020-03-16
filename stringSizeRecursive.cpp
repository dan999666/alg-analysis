/*
 * 利用递归的思想
 * 存入字符串到字符数组之中
 * 设计length函数传入字符数组指针
 * 当字符为\0终止递归
 * 否则执行加一的操作在继续调用length后函数*/
#include <iostream>
using namespace std;
int length(char *p) {
    if (*p == '\0') { //递归终止条件是否为终止符
        return 0;
    } else {
        return 1 + length(p + 1);
    }
}

int main() {
    char a[10];
    gets(a);    //获取字符串
//    scanf("%s",a);
    int result = length(a);
//    printf("%d\n", result);
    cout << result;
    return 0;
}