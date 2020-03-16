#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
//    产生20个随机数
    int a[20],i,j;
    int counter=0;
    int Max=0,Min=0;
    srand((unsigned)time(0));
    for(i=0; i<20; i++){
        a[i] = rand()%20+1;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                a[i]=rand()%20+1;
                j=0;
            }
        }
        printf("%d  ",a[i]);
    }
printf("\n");
    for (int z = 0; z < 10; z++) {
        //    查找最大值
        for (int k = 0; k < 20; ++k) {
            if (Max < a[k]) {
                Max = a[k];
            } else{
                counter++;
            }
        }
//        printf("the max value is %d\n",Max);
//        printf("the counter value is %d\n",counter);
//      查找最小值
        for (int l = 0; l < 20; ++l) {
            if (Min > a[l]){
                Min = a[l];
                counter++;
            } else{
                counter++;
            }
        }
//        printf("the min value is %d\n",Min);
//        printf("the counter value is %d\n",counter);

    }
printf("算法平均比较次数%d ",counter/10);


    return 0 ;
}