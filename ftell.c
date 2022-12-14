#include<stdio.h>
void main()
{
    FILE *file;
    file = fopen("D://input.txt", "r");
    char c;
    while(feof(file) == 0)
    {   int position = ftell(file);
        fscanf(file,"%c", &c);
        printf("%d : %c\n",position, c);
    }
}
