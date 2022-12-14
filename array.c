#include<stdio.h>

void main()
{
    int a[10];
    for (int i=0; i<10; i++){
        a[i] = i+1;
        // a[0] = 0+1
        // a[1] = 1+1
        // a[2] = 2+1
    }
    for (int j = 9; j>=0; j--){
       printf("%d ", a[j]);
    }

}
