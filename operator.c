#include<stdio.h>

void main()
{
    int a,b;
    a = 10;
    b = 5;
    int c = a - b;
    printf("%d - %d = %d\n", a,b,c);
    int d = a*b;
    printf("%d * %d = %d\n", a,b,d);

    int e = a/b;
    printf("%d / %d = %d\n", a,b,e);

    int f = a%b;
    printf("Reminder of %d / %d = %d", a,b,f);

}
