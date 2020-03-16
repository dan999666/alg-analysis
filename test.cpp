#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int sum(int arr[], int left, int right) {
    int result = 0;
    for (int i = left; i < right; ++i) {
        result = result + arr[i];
    }
    return result;
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
    cout << endl;

    int l = 0, r = size - 1;
    cout << l <<" "<<" "<< r << " "<<sum(weight, l, r) << endl;

    return 0;
}

