/*
 * ��Ŀ����дһ��ʵ�������Ҽٱ����⡣��n(n>3��Ϊż��)��Ӳ�ң�
 * ������һ���ٱң��Ҽٱҽ��ᣬ�����������Ϊ2���ٱ�����Ϊ1��
 * �ٱҲ��������ʽ���ɡ����������n��Ӳ�ҵ�������
 * �ٲ�����ƽ���ط�ʽ�ҵ�����ٱң��������������衣
 *
 * �㷨˼�룺
 * */
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int fakeCoin(int weight[], int l, int r) {
    if (l == r)//ֻʣһ��Ӳ��
        return l + 1;
        //���ֻʣ���������ң��������Ǹ����Ǽٱ�
    else if (l == (r - 1)) {
        return weight[l] < weight[r] ? l + 1 : r + 1;
    }

    int lsum = 0, rsum = 0;

    //���ż�������ң���Ƚ����ȷ�
    if ((r - l + 1) % 2 == 0) {
        for (int i = l; i < (l + (r - l + 1) / 2); i++) {
            lsum += weight[i];
        }

        for (int j = l + (r - l + 1) / 2; j <= r; j++) {
            rsum += weight[j];
        }
        cout << "Ӳ�Ҵ�" << l << "��" << (l + (r - l + 1) / 2) << "����Ϊ" << lsum << endl;
        cout << "Ӳ�Ҵ�" << l + (r - l + 1) / 2 << "��" << r << "����Ϊ" << rsum << endl;
        //�������ݵ��أ����޼ٱ�
        if (lsum == rsum)
            return -1;
        else
            return (lsum < rsum) ? fakeCoin(weight, l, l + (r - l) / 2) : fakeCoin(weight, l + (r - l) / 2 + 1, r);
    }

        //������������ң���Ƚϳ��м�����������ȷ�
    else if ((r - l + 1) % 2 != 0) {
        for (int i = l; i < (l + (r - l) / 2); i++) {
            lsum += weight[i];
        }

        for (int j = (l + (r - l) / 2 + 1); j <= r; j++) {
            rsum += weight[j];
        }
        cout << "Ӳ�Ҵ�" << l << "��" << (l + (r - l + 1) / 2) << "����Ϊ" << lsum << endl;
        cout << "Ӳ�Ҵ�" << l + (r - l + 1) / 2 << "��" << r << "����Ϊ" << rsum << endl;
        //�������ݵ��أ����޼ٱ�
        if (lsum == rsum && weight[l] == weight[l + (r - l) / 2])
            return -1;

            //������ݵ��أ��м����ҽ��ᣬ���м�����Ϊ�ٱ�
        else if (lsum == rsum && weight[l] > weight[l + (r - l) / 2])
            return l + (r - l) / 2 + 1;

            //���򣬷��ؽ����Ƿ��еļٱ�
        else
            return (lsum < rsum) ? fakeCoin(weight, l, l + (r - l) / 2 - 1) : fakeCoin(weight, l + (r - l) / 2 + 1, r);
    }
}


int main() {
    int size = 0;
    cin >> size;

    int weight[size];
    for (int i = 0; i < size; ++i) {
        weight[i] = 2;
    }

    srand((int) time(0));
    int q = rand() % size + 1;
    weight[q] = 1;

    for (int j = 0; j < size; ++j) {
        cout << weight[j] << " ";
    }
    cout << "\n";

    int falsePos = fakeCoin(weight, 0, size - 1);
    cout << "Ӳ��" << falsePos << "�Ǽٱ�" << endl;

    return 0;
}
