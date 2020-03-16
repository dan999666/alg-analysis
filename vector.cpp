/*
 * vector imple*/
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    vector<int> vec;

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
    for (int j = 0; j < n; ++j)
    {
        vec.push_back(a[j]);
    }
    for (int l = 0; l < n; ++l) {
        if (counter==k)
            printf("");
        else
            printf("%d ",vec[l]);
        counter++;
    }

}