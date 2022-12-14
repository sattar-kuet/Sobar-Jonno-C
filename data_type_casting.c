#include<stdio.h>

void main()
{
    int a,b;
    a =10;
    b = 3;
    float c = (float) a/b; // (type of desired casting type) expression

    printf("%f\n", c);

    printf("%.2f", c);
}
