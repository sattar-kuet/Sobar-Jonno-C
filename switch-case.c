#include<stdio.h>

void main()
{
    int a = 12;

    switch(a%2)
    {
    case 0:
        printf("Even number");
        break;
    default:
        printf("Odd number");
        break;

    }
}
