/*
 * ���õݹ��˼��
 * �����ַ������ַ�����֮��
 * ���length���������ַ�����ָ��
 * ���ַ�Ϊ\0��ֹ�ݹ�
 * ����ִ�м�һ�Ĳ����ڼ�������length����*/
#include <iostream>
using namespace std;
int length(char *p) {
    if (*p == '\0') { //�ݹ���ֹ�����Ƿ�Ϊ��ֹ��
        return 0;
    } else {
        return 1 + length(p + 1);
    }
}

int main() {
    char a[10];
    gets(a);    //��ȡ�ַ���
//    scanf("%s",a);
    int result = length(a);
//    printf("%d\n", result);
    cout << result;
    return 0;
}