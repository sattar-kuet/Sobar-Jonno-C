#include<stdio.h>

void main()
{
    int a;
    a = 10;
    int *p;

    p = &a;

    printf(" &a = %d", &a);

    printf("\n p = %d", p);

    printf("\n &p = %d", &p);

    printf("\n *p = %d", *p);
}
