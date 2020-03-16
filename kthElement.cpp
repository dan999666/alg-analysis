#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    //input
    int n = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int k=0,counter=1;
    scanf("%d",&k);

    priority_queue<int> queue;
    for (int j = 0; j < n; ++j) {
        queue.push(a[j]);
    }



//    sort(a,a+n);
//    printf("%d",a[k-1]);
    return 0;
}