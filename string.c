#include<stdio.h>

void main()
{
    char name[30] = "Shuvro Mahmud Bhuiyan";

    for(int i=0; name[i] != '\0'; i++)
    {
        printf("%c \n", name[i]);
    }
}
