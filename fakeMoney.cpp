/*
 * 题目：编写一个实验程序查找假币问题。有n(n>3且为偶数)个硬币，
 * 其中有一个假币，且假币较轻，假设真币重量为2，假币重量为1，
 * 假币采用随机方式生成。先依次输出n个硬币的重量，
 * 再采用天平称重方式找到这个假币，并给出操作步骤。
 *
 * 算法思想：
 * */
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int fakeCoin(int weight[], int l, int r) {
    if (l == r)//只剩一个硬币
        return l + 1;
        //如果只剩下两个银币，则较轻的那个便是假币
    else if (l == (r - 1)) {
        return weight[l] < weight[r] ? l + 1 : r + 1;
    }

    int lsum = 0, rsum = 0;

    //如果偶数个银币，则比较两等份
    if ((r - l + 1) % 2 == 0) {
        for (int i = l; i < (l + (r - l + 1) / 2); i++) {
            lsum += weight[i];
        }

        for (int j = l + (r - l + 1) / 2; j <= r; j++) {
            rsum += weight[j];
        }
        cout << "硬币从" << l << "到" << (l + (r - l + 1) / 2) << "重量为" << lsum << endl;
        cout << "硬币从" << l + (r - l + 1) / 2 << "到" << r << "重量为" << rsum << endl;
        //左右两份等重，则无假币
        if (lsum == rsum)
            return -1;
        else
            return (lsum < rsum) ? fakeCoin(weight, l, l + (r - l) / 2) : fakeCoin(weight, l + (r - l) / 2 + 1, r);
    }

        //如果奇数个银币，则比较除中间银币外的两等份
    else if ((r - l + 1) % 2 != 0) {
        for (int i = l; i < (l + (r - l) / 2); i++) {
            lsum += weight[i];
        }

        for (int j = (l + (r - l) / 2 + 1); j <= r; j++) {
            rsum += weight[j];
        }
        cout << "硬币从" << l << "到" << (l + (r - l + 1) / 2) << "重量为" << lsum << endl;
        cout << "硬币从" << l + (r - l + 1) / 2 << "到" << r << "重量为" << rsum << endl;
        //左右两份等重，则无假币
        if (lsum == rsum && weight[l] == weight[l + (r - l) / 2])
            return -1;

            //如果两份等重，中间银币较轻，则中间银币为假币
        else if (lsum == rsum && weight[l] > weight[l + (r - l) / 2])
            return l + (r - l) / 2 + 1;

            //否则，返回较轻那份中的假币
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
    cout << "硬币" << falsePos << "是假币" << endl;

    return 0;
}
