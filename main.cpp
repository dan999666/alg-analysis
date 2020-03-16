#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

int main() {
    int n=0,k=0,couter=1;
    queue<int> que;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    for (int j = 0; j < n; ++j) {
        que.push(a[j]);
    }
while (!que.empty()){
    if (couter==k) que.pop();
    printf("%d ",que.front());
    que.pop();
    couter++;
}

    return 0;
}
