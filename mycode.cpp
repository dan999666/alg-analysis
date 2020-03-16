#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

int main() {
    int n=0,k=0,couter=1;
    queue<int> que;
//    input format
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
/*  test array a
    for (int j = 0; j < n; ++j) {
        printf("%d",a[j]);
    }*/
//  赋值queue
    for (int j = 0; j < n; ++j) {
        que.push(a[j]);
    }
/*    test queue value
    for (int j = 0; j < n; ++j) {
        que.push(a[j]);
        cout<<que.front();
        que.pop();
    }*/
//cout<<que.empty();

while (!que.empty()){
    if (couter==k) que.pop();
    printf("%d ",que.front());
    que.pop();
    couter++;
}

    return 0;
}
