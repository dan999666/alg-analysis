/*
 * ���ú�ָ���ں����е�Ӧ�õ�������������
 * */
#include <iostream>
using namespace std;

// ��������
void swap(int& x, int& y);
void swap1(int *x,int *y);
int main ()
{
    // �ֲ���������
    int a = 100;
    int b = 200;

    cout << "����ǰ��a ��ֵ��" << a << endl;
    cout << "����ǰ��b ��ֵ��" << b << endl;

    /* ���ú���������ֵ */
//    swap(a, b);
        swap1(&a,&b);
    cout << "������a ��ֵ��" << a << endl;
    cout << "������b ��ֵ��" << b << endl;

    return 0;
}

// ��������
void swap(int& x, int& y)
{
    int temp;
    temp = x; /* �����ַ x ��ֵ */
    x = y;    /* �� y ��ֵ�� x */
    y = temp; /* �� x ��ֵ�� y  */

    return;
}

void swap1(int *x,int *y){
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}