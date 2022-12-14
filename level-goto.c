#include<stdio.h>

void main()
{

    int counter = 1;
     block1:
     printf("%d\n", counter);
     counter++;
     if( counter<10){
         goto block1;
     }
}
