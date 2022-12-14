#include<stdio.h>

void main()
{

    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    /*if(a>0)
    {
        printf("Positive Number");
    }
    else{
        printf("Negative Number");
    }*/
    a>0 ? printf("Positive Number") : printf("Negative Number");

}
