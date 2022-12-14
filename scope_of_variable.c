#include<stdio.h>

void main()
{
    int globe = 5;
    {
        int asia = 3;
        {
            int bangladesh = 2;
            printf("asia = %d\n", asia);
            printf("globe = %d\n", globe);
        }
        printf("globe = %d\n", bangladesh);
    }
}
