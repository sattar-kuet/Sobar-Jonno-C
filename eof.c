#include<stdio.h>
void main()
{
    FILE *file;
    file = fopen("D://input.txt", "r");
    char c;
    while(feof(file) == 0)
    {
        fscanf(file,"%c", &c);
        printf("%c",c);
    }
}
